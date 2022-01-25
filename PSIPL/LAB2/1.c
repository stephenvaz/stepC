#include<stdio.h>
#include<math.h>
int main(){
    int a,b,max,min,rem;
    printf("Enter two numbers:-\n");
    scanf("%d%d",&a,&b);
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;
    while(rem > 0){
        rem = max % min;
        max = min;
        min = rem;
    }
    printf("GCD of %d and %d is %d\n",a,b,max);
    printf("LCM of %d and %d is %d\n",a,b,(a*b)/max);
    return 0;
}