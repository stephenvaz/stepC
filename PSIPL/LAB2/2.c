#include<stdio.h>

int main(){
    int num,quo,rem;
    scanf("%d",&num);
    while (quo != 1)
    {
        quo = num / 2;
        rem = num % 2;
        num = quo;   
        printf("%d",rem);
    }
    printf("%d",quo);
}