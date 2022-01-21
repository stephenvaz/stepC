#include<stdio.h>

int main(){
    int d;
    printf("Enter number of days: ");
    scanf("%d", &d);
    printf("%d days is %d years, %d months and %d days",d,d/365,(d%365)/30,(d%365)%30);
}