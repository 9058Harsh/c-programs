#include<stdio.h>
int i,j,n;
void main()
{
    
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
       
        
            printf("%d",j+i+1);
        
        }
    printf("\n");
    }
}