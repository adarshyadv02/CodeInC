#include<stdio.h>
float sum(float,float);
int main()
{
    float s,a,b;
    printf("enter value");
    scanf("%f%f",&a,&b );
    s=sum(a,b);
    printf("%f",s);
}
float sum(float x,float y)
{
    float r;
    r=x+y;
    return r;
}