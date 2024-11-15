#include<stdio.h>
void pattern (int);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
  pattern(n);
  return 0;
}
void pattern(int x)
{
    int i,j;
     for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}