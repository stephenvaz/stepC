#include<stdio.h>

int main(){
    //address of operator
    int n1 =10;
    int *n ;
    n=&n1;
    printf("n: %d\n",*n);
    *n = 32;
    printf("n1: %d\n",*n);
    
}