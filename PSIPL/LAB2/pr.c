#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    // scanf("%d",&n);
    for (n = 1; n < 100; n++)
    {   
        // printf("%d %d\n",n,(int)(sqrt(n)));
        int t = 0;
        for (int i = 2; i <= (int)(sqrt(n)); i++) {
            
            if (n % i == 0){
                t=1;
                // printf("%d\n", n); 
                break;
            }
        }
        (t == 0) ? printf("%d\n", n) : 0;
    }
}