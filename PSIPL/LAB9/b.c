#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    printf("Enter the number of elements: ");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n/2; i++){
        swap(&a[i],&a[n-i-1]);
    }
    printf("Swapped:-\n");
    for(int i = 0; i < n; i++){
        printf("%d ",*(a+i));
    }
}