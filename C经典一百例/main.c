#include <stdio.h>
#include "tests.h"

int main() {
    printf("Hello, World!\n");
    printf(">>>>>>>>>>>>>>>>>>>> TEST 1 <<<<<<<<<<<<<<<<<<<<\n");
    test1();
    printf(">>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<\n");

    printf(">>>>>>>>>>>>>>>>>>>> TEST 2 <<<<<<<<<<<<<<<<<<<<\n");
    test2();
    printf(">>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<\n");

    return 0;
}
