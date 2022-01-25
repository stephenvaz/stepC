#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i, j, k;
 
    // print upper half
    for (i = 1; i <= n; i++)
    {
        // print '*'
        for (j = 1; j <= n + 1 - i; j++) {
            printf(" * ");
        }
 
        // print space
        for (k = 1; k < (2*i - 1); k++) {
            printf("   ");
        }
 
        // print '*'
        for (j = 1; j <= n + 1 - i; j++) {
            printf(" * ");
        }
 
        printf("\n");
    }
 
    // print lower half
    for (i = n - 1; i >= 1; i--)
    {
        // print '*'
        for (j = n; j >= i; j--) {
            printf(" * ");
        }
 
        // print space
        for (k = 1; k < (2*i - 1); k++) {
            printf("   ");
        }
 
        // print '*'
        for (j = n; j >= i; j--) {
            printf(" * ");
        }
 
        printf("\n");
    }
 
    return 0;
}