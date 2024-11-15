//
// Created by jsw on 24-11-14.
//

#ifndef C_TOOLS_TOOLS_H
#define C_TOOLS_TOOLS_H

// 不想敲 shift
#define and &&
#define or ||
#define not !

// 还是不想敲 shift
#define is_null(x) ((x) == NULL)
#define is_not_null(x) ((x) != NULL)
#define is_zero(x) ((x) == 0)
#define is_not_zero(x) ((x) != 0)
#define is_equal(x, y) ((x) == (y))
#define is_not_equal(x, y) ((x) != (y))


// 安全 free , 重复率高 do while 应该是代码结构考虑,不用多余括号
#define free_ptr(ptr) do { if ((ptr) != NULL) { free((ptr)); (ptr) = NULL; } } while(0)


typedef char *String_c;
//#define string_c char *


#endif //C_TOOLS_TOOLS_H
