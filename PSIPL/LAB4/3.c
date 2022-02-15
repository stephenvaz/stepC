#include<stdio.h>

void pat(int a)
{
    if(a<=0){
        printf("%d ",a);
    }
    else{
        printf("%d ",a);
        pat(a-5);
        printf("%d ",a);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    pat(a);
    return 0;
}