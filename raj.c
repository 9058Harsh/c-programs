#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        k=1;
        for(j=1;j<=11;j++)
    {
       
       
        if(j<=i||j>=12-i)
        {
            printf("%d",k);
           if(j<6) 
           k++;
           else
           k--;
        }
        else
        {
            printf(" ");
            if(j==6)
            k--;
            }
       }
       printf("\n");
       }



    

    
    return 0;
}