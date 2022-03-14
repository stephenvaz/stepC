#include<stdio.h>

int main(){
    char s[100];
    gets(s);
    int i;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            continue;
        }
        else{
            char temp[100];
            for(int j = i; s[i] != '\0'; i++){
                if(s[i] == ' '){
                    break;
                }
                else{
                    temp[i] = s[j];
                }
            }
            temp[i] = '\0';
            for(int i = 0; temp[i] != '\0';){
                printf("%c", temp[i]);
                i++;
            }
            printf("\n");
        }
    }
}