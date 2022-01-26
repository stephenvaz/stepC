#include<stdio.h>
#include<math.h>
int main(){
    int a[31],n,i;
    printf("Number(DEC): ");
    scanf("%d", &n);
    for(i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    for(i-=1;i>=0;i--){
        printf("%d",a[i]); 
    }
    printf("\nNumber(BIN): ");
    scanf("%d", &n);
    int d = log10(n) + 1;
    int t = 0;
    for (int i = 0; i < d; i++)
    {
        int mod = n % 10;
        n = n / 10;
        t += mod*(pow(2,i)+1e-9);
    }
    printf("%d",t);
    return 0;    
}
    
