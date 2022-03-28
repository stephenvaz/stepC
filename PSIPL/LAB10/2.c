#include<stdio.h>
#include<string.h>
int main(){
    struct rec{
        char reg[10];
        char name[20];
        char add[20];
    }v;
    char reg[10];
    int n;
    printf("Enter no. of vehicles: ");
    scanf("%d",&n);
    FILE *fp;
    fp = fopen("car.txt","w");
    for(int i = 0; i<n;i++){
        printf("Enter reg no.: ");
        scanf("%s",v.reg);
        printf("Enter name of owner: ");
        scanf("%s",v.name);
        printf("Enter address of owner: ");
        scanf("%s",v.add);
        fprintf(fp,"%s %s %s\n",v.reg,v.name,v.add);
    }
    fclose(fp);
    printf("Enter reg no. to be found:");
    scanf("%s",reg);
    fp = fopen("car.txt","r");
    while(!feof(fp)){
        fscanf(fp,"%s %s %s\n",v.reg,v.name,v.add);
        if(strcmp(v.reg,reg)==0){
            printf("Reg. No: %s\nOwner Name: %s\nAddress:%s\n",v.reg,v.name,v.add);
            break;
        }
    }
}