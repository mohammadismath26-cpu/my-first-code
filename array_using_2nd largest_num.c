#include<stdio.h>
int main()
{
int arr[50],1,n,max, second;
printf("enter number of the elements:");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
scanf("%d",&arr[1]);
max=arr[0];
second=arr[0];
for(i=1;i<n;i++)
if(arr[1]>max)
max=arr[1];
for(i=0;i<n;i++)
if(arr[1]!==max&arr[1]>second)
second=arr[1];
printf("second largest num:%d", second);
return 0;
}