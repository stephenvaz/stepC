#include<stdio.h>
int sUm(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        (n % i == 0)? sum += i: 0;
    }
    return sum;
}
int main(){
    int a;
    scanf ("%d", &a);
    printf("%d", sUm(a));
}