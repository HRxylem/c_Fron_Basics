#include<stdio.h>
int main(){
    int num, factorial;
    printf(" enter a number");
    scanf("%d ", &num);
    for( int i=1; i<=num; ++i){
        factorial=factorial*i;
    } printf("factorial of %d is %d .\n", num, factorial);
    
     
    return 0;
}