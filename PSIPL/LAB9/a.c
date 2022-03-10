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
    int min = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        (a[min]>a[i]) ? min = i : 0;
        (a[max]<a[i]) ? max = i : 0;
    }
    swap(&a[min],&a[max]);
    for(int i = 0; i < n; i++){
        printf("%d ",*(a+i));
    }
}