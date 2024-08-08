#ifndef MAIN_HANDLER
#define MAIN_HANDLER

#include <stdbool.h>

typedef int (*CallBackFun)(int num1, int num2);

typedef struct Handler
{
    int (*Pub)(CallBackFun Callback);

}Handler;

#endif