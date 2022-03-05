#include<stdio.h>

int main(){
    int n,cyr;
    printf("Enter no. of employees: ");
    scanf("%d",&n);
    printf("Enter the current year: ");
    scanf("%d",&cyr);
    int emp[n][2];
    printf("Enter the details of employees: (Emp ID) (Age)\n");
    for(int i = 0; i<n; i++){
        scanf("%d %d",&emp[i][0],&emp[i][1]);
    }
    //Debug Print
    // printf("The details of employees are:\n");
    // for(int i = 0; i<n; i++){
    //     printf("%d %d\n",emp[i][0],emp[i][1]);
    // }
    printf("Employee ID   Age   Retirement Year\n");
    for(int i = 0; i<n; i++){
        printf("%d          %d        %d\n",emp[i][0],emp[i][1],cyr+(65- emp[i][1]));
    }

}