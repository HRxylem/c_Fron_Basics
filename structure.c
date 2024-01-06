#include<stdio.h>
#include<string.h>
stuct student
{
    char n[100];
    int nu;
    float m[5], am;
};
 int main(){
    sruct student n[10];
    int i, j;
    float ma;
    for (i=0; i<10; i++){
    printf("enter the name");
    gets(s[i].n);
    fflush(stdlin);
    printf("enter the roll number");
    scanf("%d", &s[i].nu);
    ma=0;
    printf("enter the mark scored by the student in phy, chem,bio, english, political ");

for (j=0; j<5; j++){
    scanf("%f", &s[i].m[j]);
    ma=ma+s[i].m[j];
}
s[i].am = ma/5 ;
fflush(stdin);
 }
printf("the details of the first 5 students with roll number wise are displayed below:\n");
}
 for (i=0; i<10; i++){
    printf("details of the students according to roll number wise %d are: \n", s[i].nu);
    printf("name:%S", S[i].n);
    printf("\n");
    printf("the marks scored in in phy, chem, bio, english, political");
 for(j=0; j<5; j++){
 printf("%f \n", s[i].m[j]);
 printf("Avarage=%f", s[i].am);
 }
 return o;

 }