#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if(n%2==0){
        printf("%d is a even number");
    } else{
        printf("%d is odd number");
    }
    return 0;
}