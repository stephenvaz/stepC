#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of players:-\n");
    scanf("%d",&n);
    struct hockey
    {
        char name[20];
        int games;
        int scored;
    } data[n];
    for (int i = 0; i<n; i++){
        printf("Enter Name of Player %d: ",i+1);
        scanf("%s", data[i].name);
        printf("No. of matches played by %s: ", data[i].name);
        scanf("%d", &data[i].games);
        printf("Goals Scored: ");
        scanf("%d",&data[i].scored);
    }
    int temp;
    int temp1;
    char tn[20];
    for(int i =0; i<n;i++){
        for (int j = i+1; j< n; j++){
            if(data[j].scored>data[i].scored){
                temp = data[i].scored;
                data[i].scored = data[j].scored;
                data[j].scored = temp;

                temp1 = data[i].games;
                data[i].games = data[j].games;
                data[j].games = temp1;

                strcpy(tn, data[i].name);
                strcpy(data[i].name, data[j].name);
                strcpy(data[j].name, tn);
            }
        }
    }
    system("cls");
    printf("Sr. No.\tName\t\tGames\tGoals\n");
    for(int i =0; i<n;i++){
        printf("  %d  ",i+1);
        printf("\t%s\t",data[i].name);
        printf("\t%d",data[i].games);
        printf("\t%d",data[i].scored);
        printf("\n");
    }
}