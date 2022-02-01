#include<stdio.h>
int areAmicable(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int a,b;
    scanf ("%d %d", &a, &b);
    (areAmicable(a)==b && areAmicable(b)==a) ? printf("Amicable") : printf("Not Amicable");
}

