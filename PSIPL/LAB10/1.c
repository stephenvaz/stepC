#include<stdio.h>

int main(){
    //code, name author, price, pages
    struct publish{
        char code;
        char nm[20];
        char au[20];
        float price;
        int pages;
    }b;
    int n;
    printf("Enter no. of books: ");
    scanf("%d",&n);
    FILE *fp;
    fp = fopen("publish.txt","w");
    for(int i = 0; i<n;i++){
        printf("Enter code(p/h/b): ");
        scanf(" %c",&b.code);
        printf("Enter name of book: ");
        scanf("%s",b.nm);
        printf("Enter author of book: ");
        scanf("%s",b.au);
        printf("Enter price of book: ");
        scanf("%f",&b.price);
        printf("Enter no. of pages: ");
        scanf("%d",&b.pages);
        fprintf(fp,"%c %s %s %.2f %d\n",b.code,b.nm,b.au,b.price,b.pages);
    }
    fclose(fp);
    FILE *fp1, *fp2;
    fp = fopen("publish.txt","r");
    fp1 = fopen("p.txt","w");
    fp2 = fopen("h.txt","w");
    while(!feof(fp)){
        fscanf(fp,"%c %s %s %f %d\n",&b.code,b.nm,b.au,&b.price,&b.pages);
        if(b.code == 'p'){
            fprintf(fp1,"%c %s %s %.2f %d\n",b.code,b.nm,b.au,b.price,b.pages);
        }
        else if(b.code == 'h'){
            fprintf(fp2,"%c %s %s %.2f %d\n",b.code,b.nm,b.au,b.price,b.pages);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
}