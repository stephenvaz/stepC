#include<stdio.h>

int binarySearch(int ar[],int n,int f){
    int l=0,r=n-1;
    int m = (l+r)/2;
    while(l<=r){
        if(ar[m]==f){
            return m;
        }
        else if(ar[m]<f){
            l=m+1;
        }
        else{
            r=m-1;
        }
        m=(l+r)/2;
    }
}

int main(){
    int arr[] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 100};
    printf("%d",binarySearch(arr,sizeof(arr)/sizeof(arr[0]),78));
}