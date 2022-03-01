#include<stdio.h>
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sorter(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }   
        }
        swap(&arr[min_idx], &arr[i]);
    }
}
int main(){
    int arr[] = {64,25,12,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    sorter(arr,len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}