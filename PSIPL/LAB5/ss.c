#include<stdio.h>


void sorter(int arr[],int len){
    for(int i=0;i<len;i++){
        int temp, min = i;
        for(int j = i+1; j<len; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}


int main(){
    int n;
    printf("Len of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    };
    // int arr[] = {64,25,12,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    sorter(arr,len);
    printf("Sorted Array:-\n");
    for(int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
}