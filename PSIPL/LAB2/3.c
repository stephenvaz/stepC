#include<stdio.h>
int prime(int n){
  if(n<2) return 0;
  for (int i = 2; i*i <= n; i++) {
      if (n % i == 0){
          return 0;
      }
  }
  return 1;
}
int main(){
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  for(int i = a; i <= b; i++) {
    (prime(i) && prime(i+2)) ?  printf("(%d,%d)\n", i, i+2) : 0;
  }
}