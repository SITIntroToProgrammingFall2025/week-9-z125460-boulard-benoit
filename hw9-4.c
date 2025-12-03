#include<stdio.h>
#include <string.h>

int main(){
    char hexa_frist[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int colors[3];
    char hex_code[8];
    int quotient,rest;

    hex_code[0] = '#';
    hex_code[7] = '\0';

    

    for(int i=0;i<=2;i++){
        scanf("%d",&colors[i]);
    } 

    for(int i = 0;i<= 2; i++){
       int quotient = colors[i] / 16;
       int reste = colors[i] % 16;
       hex_code[1 + i*2] = hexa_frist[quotient];
       hex_code[2 + i*2] = hexa_frist[reste];
       

    }    

    printf("%s\n",hex_code);
    return 0;

};