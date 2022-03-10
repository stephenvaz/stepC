#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n/2; i++){
        swap(&a[i],&a[n-i-1]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ",*(a+i));
    }
}