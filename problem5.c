#include<stdio.h>
int sub(int,int);
int main()
{
    int a,b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    sub(a,b);
    return 0;
}
int sub(int a,int b)
{
    int res;
    res=a-b;
    printf("subtraction of a and b is %d",res);
    return res;
}