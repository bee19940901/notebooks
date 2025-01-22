#include "cut_fastq.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "sys/stat.h"
#define MAX_LINE 256

// 创建目录及其父目录
static void mkdirs(const char *outdir) {
    printf("%s\n", outdir);
    struct stat st = {0};
    if (stat(outdir, &st) == -1) {
        // 尝试创建父级目录
        char *parent_dir = strdup(outdir);
        if (parent_dir == NULL) {
            fprintf(stderr, "Memory allocation failed for parent directory path\n");
            exit(1);
        }
        char *lastSlash = strrchr(parent_dir, '/');
        if (lastSlash != NULL) {
            *lastSlash = '\0';  // 获取父目录路径
            mkdirs(parent_dir);  // 递归创建父目录
        }
        free(parent_dir);

        // 创建目标目录
        if (mkdir(outdir, 0700) != 0) {
            fprintf(stderr, "Error creating directory %s\n", outdir);
            exit(1);
        }
    }
}

// 处理 fastq 文件，按照给定的 cutoff 截断每行
void cut_fastq(const char *infile, const char *outfile, int cutoff) {
    // 创建输出目录
    char *outDir = strdup(outfile);
    if (outDir == NULL) {
        fprintf(stderr, "Memory allocation failed for output directory path\n");
        exit(1);
    }
    char *lastSlash = strrchr(outDir, '/');
    if (lastSlash != NULL) {
        *lastSlash = '\0';  // 获取目录部分
        mkdirs(outDir);  // 如果目录不存在则创建
    }
    free(outDir);

    // 打开输入和输出文件
    FILE *infile_handle = fopen(infile, "r");
    if (infile_handle == NULL) {
        fprintf(stderr, "Error, cannot open file %s\n", infile);
        exit(1);
    }

    FILE *outfile_handle = fopen(outfile, "w");
    if (outfile_handle == NULL) {
        fclose(infile_handle);
        fprintf(stderr, "Error, cannot open file %s\n", outfile);
        exit(1);
    }

    char buffer[MAX_LINE];
    int line_number = 1;
    // 逐行读取并处理
    while (fgets(buffer, MAX_LINE, infile_handle)) {
        buffer[strcspn(buffer, "\n")] = '\0';  // 去掉换行符

        // 如果是偶数行（序列行），按 cutoff 截断
        if (line_number % 2 == 0) {
            if (strlen(buffer) > cutoff) {
                buffer[cutoff] = '\0';
            }
        }
        fprintf(outfile_handle, "%s\n", buffer);
        line_number++;
    }
    fclose(infile_handle);
    fclose(outfile_handle);
}
