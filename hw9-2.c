#include <stdio.h>


void main(){

    int coeff[3][3];
    double det;

    for(int i =0;i<3;i++){
        for(int j = 0; j<3;j++){
            scanf("%d", &coeff[i][j]);
        }
    }
    
    printf("You entered\n");
    for(int i=0;i<3;i++){
        for(int j = 0 ; j <3 ; j++){
            printf("%d ",coeff[i][j]);
        }
        printf("\n");
    }

    printf("Output\n");
    for(int i=0;i<=2;i++){
        for(int j = 2 ; j >=0 ; j--){
            printf("%d  ",coeff[i][j]);
        }
        printf("\n");
    }


}
