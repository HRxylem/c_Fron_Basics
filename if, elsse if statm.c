#include<stdio.h>
int main(){
    int age;
    printf("enter the value of age: ");
    scanf("%d", &age);
    if ((age>=18) && age<=60){
        printf("they can drive vehicals\n ");
    } else if((age!=60) || age<=18){
        printf("they cannot drive any vehicals\n");
    } else if((age==50) && age>=55){
         printf("they are legend in driving and got gold medal\n");
    } else{
        printf(" invalid age is given");
    }
     return 0;
}