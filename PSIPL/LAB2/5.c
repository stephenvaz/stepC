#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i, j, k;
 
    for (i=0;i<n;i++){
        for (j=0;j<n-i;j++){
            printf(" * ");
        }
        for (j=0;j<2*i;j++){
            printf("   ");
        }
        for(j=0;j<n-i;j++){
            printf(" * ");
        }
        (i==n-1) ? NULL: printf("\n");
    }
    
    for (i=0;i<=n;i++){
        for (j=0;j<i;j++){
            printf(" * ");
        }
        for (k=0;k<2*(n-i);k++){
            printf("   ");
        }
        for (j=0;j<i;j++){
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}