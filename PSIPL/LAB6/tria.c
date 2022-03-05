#include<stdio.h>

int main(){
    int n;
    printf("Enter order of matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements of matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("(%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // int a[][3] = {{6,0,0},
    //               {0,10,0},
    //               {0,0,2}};
    int count=0,count2=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i>j){
                if(a[i][j]==0){
                    count++;
                }
            }
            else if (i<j){
                if(a[i][j]==0){
                    count2++;
                }
            }
        }
    }
    if (count == n){
        printf("The matrix is Upper Triangular");
    }
    else if (count2 == n){
        printf("The matrix is Lower Triangular");
    }
    else{
        printf("None");
    }
}