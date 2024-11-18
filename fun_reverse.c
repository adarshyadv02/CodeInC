#include<stdio.h>
int reverse(int);
int main()
{
    int a;
    printf("enter a digit");
    scanf("%d",&a);
printf("%d" ,reverse(a));
return 0;
}
int reverse (int x)
{
int reversed=0,d;
while(x>0)
{
 d=x%10;
  reversed = reversed * 10 + d;
 x=x/10;
}
return reversed;
}