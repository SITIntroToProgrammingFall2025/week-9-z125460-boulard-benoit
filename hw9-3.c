#include<stdio.h>

int main(){

    int a[2][3], b[3][2], c[2][2];

    int i,j;
    
    for(int i =0;i<2;i++){
        for(int j = 0; j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i =0;i<3;i++){
        for(int j = 0; j<2;j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("The first matrix you entered is\n");

    for(int i=0;i<2;i++){
        for(int j = 0 ; j <3 ; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }



    printf("The second matrix you entered is\n");

    for(int i=0;i<3;i++){
        for(int j = 0 ; j <2 ; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

 
for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int r = 0; r < 3; r++) {
                c[i][j] += a[i][r] * b[r][j];
            }

        }
    }


    printf("The multiplication product of A and B :\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}



