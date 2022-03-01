#include<D:\Users\Stephen\Dev\Git\stepC\PSIPL\LAB5\1_a.h>
#include<stdio.h>

int binary(int arr[],int len,int key){
    int l=0,r=len-1;
    int m = (l+r)/2;
    while(l<=r){
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]<key){
            l=m+1;
        }
        else{
            r=m-1;
        }
        m=(l+r)/2;
    }
}
int main(){
    int arr[] = {64,25,12,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    sorter(arr,len);
    printf("Sorted Array:-\n");
    for(int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
    printf("\nIndex of 25 is %d",binary(arr,len,25));
}