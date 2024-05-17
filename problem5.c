// Using functions print multiplication of two numbers given by a user.
#include<stdio.h>
int mul(int,int);
int main()
{
    int a,b,res;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    res= mul(a,b);
    return 0;
}
int mul(int a,int b)
{
    int res;
    res=a*b;
    printf("after multiplication %d",res);
    return res;
}
