// for even series and there sum

/*#include <stdio.h>
int main(){
int i, n, s=0;
printf("enter the number");
scanf("%d", &n);
printf("series of even numbers between 1 to %d:\n", n);
for(i=2; i<=n; i=i+2){
    printf("%d is even.\n", i);
    s= s+i;
} printf("series of even number between 1 to %d=%d", n ,s);
return 0;
}*/

//for odd series and their sum.

#include<stdio.h>
int main(){
    int i, n, s=0;
    printf("enter the number");
    scanf("%d", &n);
    printf("series of odd number is %d:\n", n);
    for(i=1; i<=n; i=i+2){
        printf("%d is odd.\n", i);
        s=s+i;
    }printf("series of odd number %d to %d is %d", n, s);
    return 0;
}