#include<stdio.h>
int sum();
void main()
{
    int result;
    printf("the sum of two numbers is \n");
    result=sum();
    printf("%d",result);

}

int sum()
{
    int a,b;
    printf("enter the two numbers ");
    scanf("%d %d",&a,&b);
    
    return a+b;
    
}