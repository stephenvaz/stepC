#include<stdio.h>

void encrypt(char *str){
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 1;
    }
    // while(*str != 0){
    //     *str = *str + 1;
    //     str++;
    // }
}

int main(){
    char str[100];
    printf("Enter a string:-\n");
    scanf("%[^\n]%*c",str);
    encrypt(str);
    printf("Encrypted: %s",str);
}