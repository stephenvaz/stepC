#include<stdio.h>
#include<math.h>
int prime();
int main(){
  int a, b;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &a, &b);
  for(int i = a; i <= b; i++) {
    if(prime(i) && prime(i+2)) {
      printf("(%d,%d)\n", i, i+2);
    }
  }
//   if(prime(a) && prime(b)){
//     printf("%d and %d are prime numbers\n", a, b);
//   }
//   else{
//     printf("%d and %d are not prime numbers\n", a, b);
//   }
}

int prime(int n){
  int t = 0;
        for (int i = 2; i <= (int)(sqrt(n)); i++) {
            
            if (n % i == 0){
                t=1;
                return 0;
            }
        }
        if(t == 0) return 1;
}
// int main(){
// int x, z; z=0; 
// printf("Input a number : ",x);
// scanf("%d",&x); 
// for(int y = 2; y<x; y++)
//  { if (x%y == 0) // y divides x - not a prime number
//    { 
//     printf("%d is not a prime number",x);
//      z=1; 
//      break; 
//    }
//  }
//  if (z==0)
//  { printf("%d is a prime number",x);
//  } 


// }