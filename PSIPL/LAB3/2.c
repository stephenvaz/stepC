#include<stdio.h>
int areAmicable(int n){
    int sum = 0;
    printf("Prime Divisors of %d are: ", n);
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            printf("%d +", i);
            sum += i;
        }
    }
    printf("= %d\n", sum);
    return sum;
}
int main(){
    int a,b;
    scanf ("%d %d", &a, &b);
    int t = areAmicable(a);
    int t0 = areAmicable(b);
    if (t==b && t0==a) printf("Amicable"); else printf("Not Amicable");
}

//(220, 284)