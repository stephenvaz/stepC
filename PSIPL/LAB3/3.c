#include<stdio.h>
int sUm(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0)
        {
            sum += i;
            printf("%d + ", i);
        }
    }
    printf("= ");
    return sum;
}
int main(){
    int a;
    scanf ("%d", &a);
    printf("%d", sUm(a));
}