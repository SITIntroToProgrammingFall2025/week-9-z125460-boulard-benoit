#include<stdio.h>
#include<stdbool.h>

bool is_integer(double a) {
    int b = (int)a;
    return a == (double)b;
}

int main(){

    double a[2][3], b[3][2], c[2][2];
    int i,j;
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%lf", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            scanf("%lf", &b[i][j]);
        }
    }

    printf("The first matrix you entered is\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            if(is_integer(a[i][j])){
                printf("%.0f ", a[i][j]);
            }
            else{
                printf("%.1f ", a[i][j]);
            }
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            if(is_integer(b[i][j])){
                printf("%.0f ", b[i][j]);
            }
            else{
                printf("%.1f ", b[i][j]);
            }
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = 0;
            for(int r = 0; r < 3; r++) {
                c[i][j] += a[i][r] * b[r][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(is_integer(c[i][j])){
                printf("%.0f ", c[i][j]);
            }
            else{
                printf("%.1f ", c[i][j]);  
            }
        }
        printf("\n");
    }

    return 0;
}
