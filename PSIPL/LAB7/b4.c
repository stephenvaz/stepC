#include<stdio.h>
#include<string.h>
int main(){
    char s[200];
    printf("Enter the string: ");
    scanf("%[^\n]%*c", s);
    char temp[200];
    int j = 0;
    int t = 0;
    int flag = 1;
    for(int i = 0; s[i] != '\0'; i++){
        temp[j+1] = '\0';
        if (s[i] == ' '){
            for(int k = 0; k<t/2; k++){
                if(temp[k] != temp[t-k-1]){
                    flag = 0;
                    break;
                }
            };
            if(flag == 1){
                printf("%s ", temp);
            }
            strcpy(temp, " ");
            j = 0;
            t = 0; //reset temp
            flag = 1;
            continue;
        }
        else{
            temp[j] = s[i];
            t++; //len of temp string
        }
        j++;//for setting temp string
    }
}