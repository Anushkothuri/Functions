// Using functions print factorial of given number by user.
#include<stdio.h>
unsigned long long factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number<0)
    {
        printf("factorial is not defined for negative number");
    }
    else{
        unsigned long long fact=factorial(number);
        printf("factorial of %d is %llu",number,fact);

    }
    return 0;
}
