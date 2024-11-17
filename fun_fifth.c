#include<stdio.h>
#include<math.h>
int series(int);
int main()
{
    int a;
    printf("enter value");
    scanf("%d",&a);
 printf("%d",series(a));
 return 0;
}
int series(int x)
{
    int i,a;
    for(i=1;i<=x;i++)
    {
  a=a+pow(i,i);
    }
return a;
}