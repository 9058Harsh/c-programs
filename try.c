#include<stdio.h>
struct spmat
{
    int row ;
    int column;
    int value;

} a[5];

void main()
{
struct spmat a[5];
printf("enter the rows ,column and value of matrix ");
for(int i=0;i<5;i++)
{
    scanf("%d%d%d",&a[i].row,&a[i].column,&a[i].value);
}


for(int i=0;i<5;i++)
{
    printf("%d%d%d",a[i].row,a[i].column,a[i].value);
}
}
    