#include<stdio.h>

int matMulti(int a1[*n][*m],int a2,int a3){
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            a3[i][j]=0;
            for(k=0;k<3;k++){
                a3[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
    
}

int main(){
    // int n,m;
    // printf("Enter the number of rows and columns of the matrix:-\n");
    // scanf("%d %d",&n,&m);
    int a1[2][3]={{1,2,3},{4,5,6}};
    int a2[3][2]={{7,8},{9,10},{11,12}};
    // printf("Enter the elements of the matrix:-\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    int a3[2][2];
    matMulti(a1[2][3], a2[3][2], a3[2][2]);
    printf("The resultant matrix is:-\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }   

}