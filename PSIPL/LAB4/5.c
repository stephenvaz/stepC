#include<stdio.h>

int p0w(int x,int n)
{
    if(n==0) return 1;
    else return x*p0w(x,n-1);
}

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    printf("y = %d",p0w(x,n));
}