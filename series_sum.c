#include <stdio.h>
int main()
{

    int n,sum=0,fact;
    printf("enter value");
    scanf("%d",&n);

for(int i=1;i<=n;i++)
{
fact=1;
for(int j=1;j<=i;j++){
fact=j*fact;
}
if(i%2==0||i==1)
sum+=fact;
else
sum-=fact;
}
printf("%d",sum);
return 0;
}