#include<stdio.h>

void binarySearch(int ar[],int n,int f){
    int l=0,r=n-1;
    int m = (l+r)/2;
    while(l<=r){
        if(ar[m]==f){
            printf("Found %d at index %d",f,m);
            return;
        }
        else if(ar[m]<f){
            l=m+1;
        }
        else{
            r=m-1;
        }
        m=(l+r)/2;
    }
    printf("%d not found",f);
}

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
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    };
    sorter(ar,n);
    printf("Sorted Array:-\n");
    for(int i = 0; i < n; i++){
        printf("%d ",ar[i]);
    }
    printf("\nEnter the number to be searched: ");
    int f;
    scanf("%d",&f);
    binarySearch(ar,n,f);
}