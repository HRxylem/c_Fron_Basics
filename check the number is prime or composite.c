#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("enter the number");
    scanf("%d", &n);
    printf("series of odd number from 1 to %d\n", n);
    for (i = 1; i <= n; i=i+2)
    {
        printf("%d is odd \n", i);
        s=s+i;
    }
    printf("series of odd number from %dto %d is %d\n", n, s);
    return 0;
}