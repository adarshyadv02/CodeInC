#include <stdio.h>
int fact(int);
void main()
{
int n,r;
printf("enter value");
scanf("%d",&n);
r=fact(n);
printf("%d",r);
}
int fact(int x)
{
    int f=1,i;
    for(i=2;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
