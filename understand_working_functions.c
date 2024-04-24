#include<stdio.h>
void fun1()
{
    printf("inside function 1\n");
}
void fun2()
{
    printf("before function 1\n");
    fun1();
    printf("after function 1\n");
}
int main()
{
    printf("main function\n");
    fun2();
    return 0;
}

