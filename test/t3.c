#include <stdio.h>

int main(){
    // int a[5] = {4,0,15,20,25};
    // int i,j,m;
    // i = ++a[1]; // i = 1, a[1] = 1
    // j = a[1]++; // j = 1, a[1] = 2
    // m = a[i++]; // m = 2, i = 2
    // printf("%d %d %d\n",i,j,m);

    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c: %d\n", str[i], (int)str[i]);
    }
}