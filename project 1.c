#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, n;
    srand(time(0));
    number = rand()% 100 + 1;
   // printf("the number is %d", number);
    do{
        printf("guess the number between 1 to 100 \n");
        scanf("%d", &guess);
        if(guess > number){
            printf("lower number please choose or enter again\n");
        } else if(guess < number){
            printf("higher number please choose or enter again\n");
        } else{
            printf("you guessed it in %d attempts\n", n);
        }
        n++;

     } while(guess != number);

    return 0;
}