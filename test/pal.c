#include<stdio.h>
#include<string.h>
int main(){
    char s[200];
    printf("Enter the string(Add one extra space at the end): ");
    scanf("%[^\n]%*c", s);
    char temp[200];
    int j = 0;
    int t = 0;
    // int count = 0;
    int flag = 0;
    for(int i = 0; s[i] != '\0'; i++){
        
        if (s[i] == ' '){
            for(int k = 0; k<t/2; k++){
                if(temp[k] != temp[t-k-1]){
                    flag = 1;
                    break;
                }
                // else{
                //     count++;
                // }
            };
            //printf("count = %d, t = %d\n", count,t);
            if (flag == 0){
                printf("%s ", temp);
            }
            strcpy(temp, " ");
            j = 0;
            t = 0; //reset temp
            // count = 0; //reset count
            continue;
        }
        else{
            temp[j] = s[i];
            t++; //len of temp string
        }
        j++;//for setting temp string
    }
}   