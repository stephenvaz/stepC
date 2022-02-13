#include<stdio.h>

int ackerMan(int m,int n){
    if(m==0) return n+1;
    else if(n==0) return ackerMan(m-1,1);
    else return ackerMan(m-1,ackerMan(m,n-1));
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",ackerMan(m,n));
}