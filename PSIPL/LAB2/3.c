#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers:-\n");
    scanf("%d%d",&a,&b);
    for(int i = a/2; i<(int)(b/2);i++){
        printf("(%d,%d)\n",6*i-1,6*i+1);
    }
}