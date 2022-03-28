#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j=0,k=0,len;
    char str[100],strTemp[100][100];
    printf("Enter String: ");
    scanf("%[^\n]%*c",str);
    while(str[i]!='\0'){
        k=0;
        while(str[i]!=' ' && str[i]!='\0'){
            strTemp[j][k]=str[i];
            i++;
            k++;
        }
        strTemp[j][k]='\0';
        j++;
        if(str[i]!='\0'){
            i++;
        }
    }
    printf("New String: ");
    len=j;
    for(j=0;j<len;j++){
        for(k=j+1;k<len;)
            if(strcmp(strTemp[j],strTemp[k])==0){
                for(i=k;i<len;i++){
                    strcpy(strTemp[i],strTemp[i+1]);
                }
                len--;
            }
        else{
            k++;
        }
    }
    for(j=0;j<len;j++){
        printf("%s ",strTemp[j]);
    }
}