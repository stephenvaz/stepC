#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("(%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
            swap(&a[i][j],&a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}