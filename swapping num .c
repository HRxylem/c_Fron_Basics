#include <stdio.h>
int main (){
    int a, b, c;
    printf("enter two number");
    scanf("%d %d", &a, &b);
    printf("before swapping:\n first variable=%d and second variable=%d\n" , a, b);
    a=b;
    b=c;
    c=a;
    printf("after swapping:\n first variable=%d and second variable= %d\n", a, b);
    return 0;
}