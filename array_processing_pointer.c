#include<stdio.h>
int i;
int main()
{
int n, sum=0, max, arr [50], evencount=0;
int *ptr;
printf("enter the number:“);
scanf("%d",&n);
printf("enter a value:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
ptr=arr;
max=*ptr;
for(i=0;i<n;i++){
sum=sum+*(ptr);
if(*ptr>max)
max=*ptr;
if(*ptr%2==0)evencount++;
ptr++;}
printf("sum:%d\n",sum);
pfintf("max:%d\n",max);
printf("even:%dln",evencount);
return 0;