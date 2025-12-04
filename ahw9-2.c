#include<stdio.h>

void remove_element(int arr[], int *n, int index) {
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}



int main(){
    int arr[5],sorted_arr[5];
    int n = 5,ind;
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
}
    for (int j = 0; j < 5; j++) {
        ind = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[ind]) {
                ind = i;
        }
        }
        sorted_arr[j] = arr[ind];
        remove_element(arr, &n, ind);
            }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", sorted_arr[i]);
}
    }