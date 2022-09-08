#include<stdio.h>
int main()
{
 int i,low,mid,high,n,key;
 int a[10];
 printf("Enter number of element of array= ");
 scanf("%d",&n);
 printf("Enter array: ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enter Value for search: ");
 scanf("%d",&key);
 low=0;
 high=n-1;
 mid=(low+high/2);
 while(low<=high)
 {
     if(a[mid]<key)
     low=mid+1;
     else if (a[mid]==key)
     {
         printf("Value found at [%d]",mid);
         break;
     }
     else
     high=mid-1;
     mid=(low+high)/2;
 }
 if(low>high)
 printf("Value not found");
}
