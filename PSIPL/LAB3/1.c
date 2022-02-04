#include<stdio.h>

int primeCheck(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b;
    scanf ("%d %d", &a, &b);
    for (int i = a; i <= b; i++){
        (primeCheck(i)) ? printf("%d* ", i) : printf("%d ", i);
    }
};