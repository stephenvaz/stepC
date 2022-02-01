#include<stdio.h>

int isPrime(int n){
    int i;
    for(i=2;i*i<=n;i++){
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
        (isPrime(i)) ? printf("%d* ", i) : printf("%d ", i);
    }
};

