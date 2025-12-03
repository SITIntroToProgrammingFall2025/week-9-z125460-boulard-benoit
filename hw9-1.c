#include <stdio.h>


void main(){

    int coeff[2][2];
    double det;

    for(int i =0;i<2;i++){
        for(int j = 0; j<2;j++){
            scanf("%d", &coeff[i][j]);
        }
    }
    
    printf("You entered\n");
    for(int i=0;i<2;i++){
        for(int j = 0 ; j <2 ; j++){
            printf("%d ",coeff[i][j]);
        }
        printf("\n");
    }

    det = coeff[0][0]*coeff[1][1]-coeff[0][1]*coeff[1][0];
    printf("Determinant is %f", det);


}