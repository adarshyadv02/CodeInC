#include <stdio.h>
int main()
{
    int m=1, c, n;
    printf("enter a number");
    scanf("%d", &n);
    c = n;
    n = 1;
    while (c > 1)
    {
        m = m * c;
        c--;
    }
    printf("%d", m);
    return 0;
}