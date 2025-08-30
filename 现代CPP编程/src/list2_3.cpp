//
// Created by Bee on 2025/8/30.
//
/*
 * 一个打印浮点数的程序
 * */

#include <cstdio>
#include "list2_3.hpp"

void list2_3(){
    /*
     * 双精度浮点数
     * %le: 科学记数法
     * %lf： 小数形式
     * %lg： 自动选择科学记数法或者小数形式
     * 默认情况下使用%lg即可
     * */
    double an = 6.0221409e23;
    printf("Avogadro's Number: %le %lf %lg\n", an , an, an);

    /*
     * 单精度浮点数
     * %e: 科学记数法
     * %f: 小数形式
     * %g: 自动选择小数或者科学记数法
     * 默认情况下选择%g
     * */
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp);

    /*
     * 注意　
     * 在实践中，可以省略double格式指定符中的l前缀，
     * 因为printf会将浮点数参数提升为双精度类型
     * 所以说在绝大多数情况下使用%g占位符即可
     * */
    printf("Bee's Number: %e, %f, %g", an, an, an);
}


