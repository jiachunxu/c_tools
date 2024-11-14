//
// Created by jsw on 24-11-14.
//
#include "../src/include/tools.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    printf("Hello, world!\n");
    int a = 0;
    if (is_zero(a)) {
        printf("a is zero\n");
    } else {
        printf("a is not zero\n");
        return 0;
    }

    string_c str = "what";
    printf("str is %s\n", str);

}