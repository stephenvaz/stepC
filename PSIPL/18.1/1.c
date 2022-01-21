#include<stdio.h>
#include<stdlib.h>

int main() {
    int a,b,r;
    float c;
    printf("Enter two numbers:-(with space in b/w)\n");
    scanf("%d%d",&a,&b);
    system("clear");
    printf("The addition of a = %d and b = %d is %d and subtraction is %d\nThe int division is %d\nInt remainder is %d",a,b,a+b,a-b,a/b,a%b);
    c = a/b *2.50;
    printf("\nThe float division is %f",c);
    
    return 0;
}

