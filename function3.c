#include<stdio.h>
void sum(int,int);
void main ()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("calculation of addition of two numbers\n");
    sum(a,b);
}
void sum(int a,int b)
{   int sum=0;
    sum=a+b;
    printf("the sum is %d",sum);
}