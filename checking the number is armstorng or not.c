#include <stdio.h>
#include <math.h>
int main(){
    int n, m, r, s=0, p=0;
    printf("enter the number ");
    scanf("%d", &n);
    m=n;
    do{
        r=m%10;
        p= pow(r,3);
        s=s+p;
        m=m/10;
    }
    while(m!=0);
    if(s==n){
        printf("%d is armstrong number", n);
    }else{
        printf("not armstrong number");
    }
    return 0;    
}