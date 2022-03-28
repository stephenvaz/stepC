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
    for(int i = 0; i<n; i++){
        if(emp[i][0] == -1){
            continue;
        }
        printf("Year of retirement: %d\n",cyr+(65-emp[i][1]));
        printf("List of employees:\n");
        for (int j = i; j < n; j++){
            if (emp[j][1] == emp[i][1]){
                printf("%d\n",emp[j][0]);
                emp[j][0] = -1;
            }
        }
    }
}