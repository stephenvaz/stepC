#include<stdio.h>
int primeCheck(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int mobius(int n){
    if(n==1) return 1;
    int k=0;
    for(int i=1;i<=n;i++){
        if (primeCheck(i) && n%i==0){
            if(n%(i*i)==0) return 0;
            else k++;
        }
    }
    return (k % 2 != 0)? -1 : 1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("M(%d) = %d", n, mobius(n));
}