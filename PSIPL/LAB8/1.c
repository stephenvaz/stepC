#include<stdio.h>

int main(){
    int n;
    struct club{
        char name[20];
        int age;
        char addr[20];
        int ms;  // 0 or 1  1 - married 
        struct msU
        {
            char wife[20];
            int kids;
            struct kid
            {
                char kidn[20][10];
            } k ; 
            
        } a;
    } data[10];
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        printf("Enter Name of Player %d: ",i+1);
        scanf("%s",data[i].name);
        printf("Enter Age of Player %d: ",i+1);
        scanf("%d",&data[i].age);
        printf("Enter Address of Player %d: ",i+1);
        scanf("%s",data[i].addr);
        printf("Enter Marital Status of Player %d (0 - unMarried): ",i+1);
        scanf("%d",&data[i].ms);
        if(data[i].ms == 1){
            printf("Enter Wife Name of Player %d: ",i+1);
            scanf("%s",data[i].a.wife);
            printf("Enter No. of Kids of Player %d: ",i+1);
            scanf("%d",&data[i].a.kids);
            if(data[i].a.kids > 0){
                for (int j = 0; j<data[i].a.kids; j++){
                    printf("Enter Name of Kid %d: ",j+1);
                    scanf("%s",data[i].a.k.kidn[j]);
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s",data[i].name);
        printf(" %d",data[i].age);
        printf(" %s",data[i].addr);
        if(data[i].ms == 1){
            printf(" %s",data[i].a.wife);
            printf(" %d",data[i].a.kids);
            if(data[i].a.kids > 0){
                for (int j = 0; j<data[i].a.kids; j++){
                    printf(" %s",data[i].a.k.kidn[j]);
                }
            }
        }
        printf("\n");
    }
    
}