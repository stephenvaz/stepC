#include<stdio.h>
int funcT(int n){
    for(int i=1;i<=n/2 + 1;i++){
        for(int j=1;j<=n/2-i+1;j++){
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    funcT(n);
    return 0;
}