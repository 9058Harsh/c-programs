#include<stdio.h>
void sum();
void main()
{
    
    printf("the sum of two numbers is \n");
    sum();
}
void sum()
{
    int a,b,c;
    printf("enter the two numbers ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}