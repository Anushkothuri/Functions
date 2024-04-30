// Using functions print sum of two numbers.
#include<stdio.h>
int sumTwo(int,int);
int main()
{
    int a,b,sum;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=sumTwo(a,b);
    return 0;
}
int sumTwo(int a,int b)
{
    int sum=a+b;
    printf("%d is sum",sum);
    return sum;
}