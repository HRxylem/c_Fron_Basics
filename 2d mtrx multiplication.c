#include<stdio.h>
int main(){
int a[2][2], b[2][2], c[2][2];
printf("enter the element of the first matrix\n");
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        scanf("%d", &a[i][j]);
    }
}
printf("enter the element of the second matrix\n");
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        scanf("%d", &b[i][j]);
    }
}
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        c[i][j]=0;
        for(int k=0; k<2; k++){
            c[i][j]= c[i][j]*(a[i][k]+b[k][j]);
        }
    }
}
printf("result matrix after multiplixcation\n");
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        printf("%d", c[i][j]);
    }
    printf("\n");
}
return 0;
}