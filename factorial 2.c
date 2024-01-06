#include <stdio.h>
int factorial(int);
int factorial(int n){
    if (n==0 || n==1){
     return 1;
    } else{
        return n* factorial(n-1);
    }
    int main(){
        int sum, fact;
        printf("enter the non negative integer\n");

        if(n<0){
            printf("enter the non negative integer\n");
        } else{
            fact= factorial(sum);
            printf("please enter the non negative integer\n ", sum, fact);
        }
    }
    return 0;
}