#include<stdio.h>
int main()
{
    int ct,a=0,b=1,n,c;
    printf("enter value");
    scanf("%d",&n);
    printf("%d%d",a,b);
    ct=3;
    while(ct<=n)
    {
     int c=a+b;
     printf("%d",c);
     a=b;
     b=c;
     ct++;
    }
    return 0;
}