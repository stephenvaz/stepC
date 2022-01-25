#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    
    int n;
    int sum = 0;
    scanf("%d",&n);
    int test = n;
    int d = floor(log10(n)) + 1;
    while(n > 0) 
    {
        int mod = n % 10;
        n = n / 10;
        sum += (pow(mod,d)+1e-9);
    }
    if (sum == test)
        printf("%d is an Armstrong number\n",test);
    else
        printf("%d is not an Armstrong number\n",test);
    return 0;
}