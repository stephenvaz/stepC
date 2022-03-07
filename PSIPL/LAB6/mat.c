#include<stdio.h>

void matMulti(int n1,int m1,int n2,int m2,int a1[n1][m1],int a2[n2][m2],int a3[n1][m2]){
    if(m1 != n2){
        printf("Multiplication not possible");
        return;
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            a3[i][j]=0;
            for(int k=0;k<n2;k++){
                a3[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
}

void tS(int n1,int m1,int a1[n1][m1],int a2[m1][n1]){
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            a2[i][j]=a1[j][i];
        }
    }
}

void print(int n,int m, int a3[][m]){
    printf("The resultant matrix is:-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
}
void menu(){
    int c;
    printf("1. Multiplication\n2. Transpose\n3. Exit\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    {
        int arr[4];
        for(int i = 0; i < 4; i+=2)
        {
            printf("Enter the number of rows and columns of the matrix %d:-\n",i/2+1);
            scanf("%d %d",&arr[i],&arr[i+1]);
        }
        int a1 [arr[0]] [arr[1]], a2 [arr[2]] [arr[3]], a3 [arr[0]] [arr[3]];
        for(int i=0;i<2;i++){
            printf("Enter the elements of matrix %d:-\n",i+1);
            for(int j=0;j<arr[2*i];j++){
                for(int k=0;k<arr[2*i+1];k++){
                    printf("(%d,%d): ",j+1,k+1);
                    (i == 0) ? scanf("%d",&a1[j][k]):scanf("%d",&a2[j][k]);
                }
            }
        }
        // print(arr[0],arr[1],a1);
        // print(arr[2],arr[3],a2);
        matMulti(arr[0],arr[1],arr[2],arr[3],a1, a2, a3);
        print(arr[0],arr[3], a3);
        break;
    }

    case 2:
    {
        int n1,m1;
        printf("Enter the number of rows and columns of the matrix :-\n");
        scanf("%d %d",&n1,&m1);
        int a1[n1][m1],a2[m1][n1];
        printf("Enter the elements of matrix :-\n");
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m1; j++){
                printf("(%d,%d): ",i+1,j+1);
                scanf("%d",&a1[i][j]);
            }
        }
        tS(n1,m1,a1,a2);
        print(m1,n1,a2);
        break;
    }
    default:
        break;
    }
}



int main(){
    // int n,m;
    // printf("Enter the number of rows and columns of the matrix:-\n");
    // scanf("%d %d",&n,&m);
    // int a1[2][3]={{1,2,3},{4,5,6}};
    // int a2[3][2]={{7,8},{9,10},{11,12}};
    // printf("Enter the elements of the matrix:-\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // int a3[2][2];
    
    // matMulti(2,3,3,2,a1, a2, a3);
    menu();
    return 0;   

}