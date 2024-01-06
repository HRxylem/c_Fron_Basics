#include<stdio.h>
int main(){
int ar[10];
float av;

printf("enter the element in the array\n");
for(int i=0; i<10; i++){
    scanf("%d" &ar[i]);
}
int s=0;
for(int i=0; i<10; i++){
    s=s+ar[i];
}
av=s/10;
printf("sum : %d\n", s);
printf("av : %f\n", av);

return 0;
}
