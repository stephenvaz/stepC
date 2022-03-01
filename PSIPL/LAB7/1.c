#include<stdio.h>
#include<string.h>

int main(){
    char str[69];
    gets(str);
    for (int i = 0,j; str[i] != '\0'; ++i){
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
        continue;
        // printf("%c",str[i]);
      }
      else{
        for (j = i; str[j] != '\0'; ++j){
        str[j] = str[j + 1];
        }
        str[j] = '\0';
      }
    }
    puts(str);
    return 0;
}

// while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0')) {
//         for (int j = i; str[j] != '\0'; ++j){
//         str[j] = str[j + 1];
//         }
//         str[j] = '\0';
//       }