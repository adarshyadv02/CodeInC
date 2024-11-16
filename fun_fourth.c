#include<stdio.h>
int fact(int);
void main()
{
 int a,b,c;
 float res;
 printf("enter value");
 scanf("%d%d%d",&a,&b,&c);
 res=fact(a)/(fact(b)+fact(c));
 printf("%f",res);
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