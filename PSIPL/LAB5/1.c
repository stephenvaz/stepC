#include<stdio.h>

void sorter(int arr[], int len){
    for (int i = 0; i < len-1; i++){
        int temp, min_idx = i;
        for (int j = i+1; j < len; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }   
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[] = {64,25,12,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    sorter(arr,len);
    for (int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}