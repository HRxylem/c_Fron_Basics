#include<stdio.h>
void swap(int, int);
void swap(int a, int b){
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the value of a=%d and b=%d\n", a, b);
}
int main(){
    int x, y;
    printf("enter the value of x=%d\n");
    scanf("%d", &x);
    printf("enter the value of y=%d\n");
    scanf("%d", &y);
    printf("before swapping the value of x=%d and y=%d\n", x, y);

    swap(x,y);
    return 0;
}