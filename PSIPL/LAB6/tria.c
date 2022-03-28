#include<stdio.h>

int main(){
    int n;
    printf("Enter order of matrix (square only): ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements of matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("(%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i>j && a[i][j]!=0){
                c1 = 1;
            }
            else if (i<j && a[i][j]!=0){
                c2 = 1;
            }
        }
    }
    if (c1 == 0){
        printf("The matrix is Upper Triangular\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    printf(" %d ", a[i][j]);
                }
                else
                {
                    printf(" * ");
                }
            }
            printf("\n");
        }
        
    }
    else if (c2 == 0){
        printf("The matrix is Lower Triangular");
    }
    else{
        printf("None");
    }
}
// int a[][3] = {{6,0,0},
    //               {0,10,0},
    //               {0,0,2}}