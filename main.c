#include <stdio.h>

#include "mainHandler.h"
#include "welcome.h"

Handler *handle = NULL;

typedef int (*CallBackFunction)(int a, int b);
typedef void (*x)();

CallBackFunction Callback = NULL;
x new = NULL;

int add (int a, int b)
{
    printf("sha %d\r\n",a+b);
    return (a+b);
}

void sha()
{
    printf("Hello World\r\n");
}

void fun(int num1, int num2, CallBackFunction Callback)
{
    int a = Callback(num1,num2);
    printf("Your Answer is %d\r\n",a);
}

int main()
{

    // Callback = add;

    // new = sha;

    // printf("%d\r\n",Callback(7,8));

    // new;

    handle = Create();

    handle->Pub(Callback);


    return 0;
}