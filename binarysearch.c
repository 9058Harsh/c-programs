#include<stdio.h>
int main(){
int i,l,r,mid,a[50],s,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the element you want to search ");
scanf("%d",&s);
l=0,r=n-1;
 
while (l <= r) {
   mid=(l+r)/2;
    if (a[mid] < s)
      l = mid + 1;
    else if (a[mid] == s) {
      printf("%d found at location %d.\n", s, mid+1);
      break;
    }
    else
      r = mid - 1;

  }
  if (l > r)
    printf("Not found! %d isn't present in the list.\n", s);
return 0;
}