#include <stdio.h>
int main(){
int i=0, j=2, k=3, n;
printf("enter the number");
scanf("%d", &n);
i= n + j;
k= n + i;
j= k + i;
printf("the sum of i, j, k is %d %d %d \n", i, j, k);
 if(i=k){
    printf("they can procede");
} else if(k>i){
    printf("they cannot procede");
} 
   return 0;
 }
