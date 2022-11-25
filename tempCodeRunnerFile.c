#include<stdio.h>

void quicksort(int[],int,int);
int partition(int[],int,int);
void swap(int[],int,int);

int main()
{
    int n,i;
    printf("enter the number of elements of an array");
    scanf("%d",&n);

    int a[n];
    printf("enter the elements of an array");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int lb=0;
    int ub=n-1;
    quicksort(a,lb,ub);
    printf("the quicksorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        return 0;
    }

}

void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}

int partition(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start=start+1;
        }
        while(a[end]>pivot)
        {
            end=end-1;
        }
        if(start<end)
        {
            swap(a,start,end);
        }
        swap(a,lb,end);
        return a[end];
    }
}
void swap(int a[],int x, int y)
{
    int t = a[x];
    a[x] = a[y];
    a[y] = t;
}




