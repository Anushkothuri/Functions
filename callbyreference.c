//swapping two numbers using call by reference.
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("before swapping:%d and %d",a,b);
    swap(&a,&b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;;
    printf("after swapping:%d and %d",*a,*b);
}