#include<stdio.h>
#include<math.h>



double norm(double a[3],double b[3]){
return sqrt(pow(a[0]-b[0],2) + pow(a[1]-b[1],2) + pow(a[2]-b[2],2));
}


int main(){
double colors[3],norms[5],min, RGB[5][3] = {{0,0,0},{255,0,0,},{0,255,0},{0,0,255},{255,255,255}};
int index;
char *color_names[5] = {"Black", "Red", "Green","Blue","White"};

for(int i = 0; i <= 2; i++){
scanf("%lf",&colors[i]);    
} 

for(int i = 0; i <= 4; i++){
norms[i] = norm(colors,RGB[i]);    
} 

index = 0;
min = norms[0];

for(int i = 1; i<=4;i++){
    if(norms[i] < min){
        min = norms[i];
        index = i;
    }
}

printf("The nearest color is %s\n",color_names[index]);

}