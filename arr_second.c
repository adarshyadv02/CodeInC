#include <stdio.h>
void main()
{
 int a[50],i,max,n;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter the value");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=1;i<n;i++)
 {
    if(max<a[i])
    {
        max=a[i];
    }
 }
 printf("%d",max);
}