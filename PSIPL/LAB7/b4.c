#include<stdio.h>

int main(){
    char s[100];
    gets(s);
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            continue;
        }
        else{
            printf("\n%c", s[i]);
        }
    }
}