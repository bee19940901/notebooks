//
// Created by Bee on 2025/1/22.
//

#ifndef C_STRSPLIT_H
#define C_STRSPLIT_H

#endif //C_STRSPLIT_H

void free_split_result(char **result, int count);

char **strsplit(const char *str, const char *delimiter, int *count);