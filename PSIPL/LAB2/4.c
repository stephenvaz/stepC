#include<stdio.h>
#include<math.h>
int main(){
    int k,sq;
    scanf("%d",&k);
    sq = (int)(pow(k,2)+1e-9);
    int d = log10(sq) + 1;
    d = (d%2 == 0)? d/2 : d/2 + 1;
    int p1 = (int)((sq/(pow(10,d)+1e-9)));
    (p1+sq - (int)(p1*(pow(10,d)+1e-9))== k) ? printf("%d is kaprekar",k) : printf("%d isn't kaprekar",k);
}