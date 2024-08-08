#include "welcome.h"
#include "stdio.h"

static int sub(int num1, int num2);
static int Pub(CallBackFun Callback);

Handler handlers = 
{
    Pub
};

Handler *Create()
{
    printf("Successfully created\r\n");

    return &handlers;
}


static int Pub(CallBackFun Callback)
{
    if (Callback != NULL)
    {
        Callback(5,100);
    }

    else
    {
        printf("Issue\r\n");
    }


    return 1;
}

static int sub(int num1,int num2)
{
    int res = num1*num2;
    printf("res %d\r\n",res);
    return res;
}

