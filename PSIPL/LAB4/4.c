#include<stdio.h>
int ackerMan(int m,int n){
    if(m==0) return n+1;
    else if(n==0) return ackerMan(m-1,1);
    else return ackerMan(m-1,ackerMan(m,n-1));
}

int main(){
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("A(%d,%d)=%ld   ",j,i,ackerMan(j,i));
        }
        printf("\n");
    }
}