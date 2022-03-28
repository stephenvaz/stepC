#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of members: ");
    scanf("%d",&n);
    struct club{
        char name[20];
        int age;
        char addr[20];
        int ms;  // 0 or 1
        struct msU
        {
            char wife[20];
            int kids;
            struct kid
            {
                char kidn[20][10];
            } k ; 
            
        } a;
    } data[n];
    for(int i = 0; i<n;i++){
        printf("Enter Name of Player %d: ",i+1);
        scanf("%s",data[i].name);
        printf("Enter Age of %s: ",data[i].name);
        scanf("%d",&data[i].age);
        printf("Enter Address of %s: ",data[i].name);
        scanf("%s",data[i].addr);
        printf("Enter Marital Status of %s (0 - unMarried): ",data[i].name);
        scanf("%d",&data[i].ms);
        if(data[i].ms == 1){
            printf("Enter Name of %s's Wife: ",data[i].name);
            scanf("%s",data[i].a.wife);
            printf("Enter No. of Kids of %s: ",data[i].name);
            scanf("%d",&data[i].a.kids);
            if(data[i].a.kids > 0){
                for (int j = 0; j<data[i].a.kids; j++){
                    printf("Enter Name of Kid %d: ",j+1);
                    scanf("%s",data[i].a.k.kidn[j]);
                }
            }
        }
    }
    int t = 1;
    for(int i = 0; i < n; i++){
        
        if(data[i].ms == 1){
            printf("Player %d:-\n",t);
            printf("Name: %s\n",data[i].name);
            printf("Wife's Name: %s",data[i].a.wife);
            t++;
            printf("\n");
        }
        
    }
    
}