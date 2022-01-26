#include<stdio.h>

void fun(int n){
 int arr[n];
 for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}  
int main(){
    int a;
    scanf("%d",&a);
    fun(a);
    
    

}