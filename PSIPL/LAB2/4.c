#include<stdio.h>
#include<math.h>
int main(){
    int k,sq;
    scanf("%d",&k);
    sq = (int) (pow(k,2)+1e-9);
    int d = floor(log10(abs(k))) + 1;
    printf("%d\n",sq);
}