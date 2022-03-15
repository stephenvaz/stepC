#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    struct item
    {
        int type;
        float price;
        union u
        {
            struct book
            {
                char title[20];
                char author[20];
                int pages;
            }b;
            struct shirt
            {
                char color[20];
                int size;
                char design[20];
            }s;
        }un;
    }prod[n];

    for(int i = 0; i < n; i++){
        printf("Enter (0-book,1-shirt)");
        scanf("%d", &prod[i].type);
        printf("Price of item: ");
        scanf("%f", &prod[i].price);
        if(prod[i].type == 0){
            printf("Title of Book: ");
            scanf("%s", prod[i].un.b.title);
            printf("Author: ");
            scanf("%s", prod[i].un.b.author);
            printf("No. of pages: ");
            scanf("%d",&prod[i].un.b.pages);
        }
        else{
            printf("Color of shirt: ");
            scanf("%s", prod[i].un.s.color);
            printf("Size: ");
            scanf("%d",&prod[i].un.s.size);
            printf("Design: ");
            scanf("%s", prod[i].un.s.design);
        }
    }

    // for(int i = 0; i<n; i++){
    //     printf("%d: %d",i+1, prod[i].type);
    //     printf("Price of item: %f",prod[i].price);
    //     if(prod[i].type == 0){
    //         printf("Title of Book: %s", prod[i].un.b.title);
    //         printf("Author: %s", prod[i].un.b.author);
    //         printf("No. of pages: %d",prod[i].un.b.pages);
    //     }
    //     else{
    //         printf("Color of shirt: %s", prod[i].un.s.color);
    //         printf("Size: %d",prod[i].un.s.size);
    //         printf("Design: %s", prod[i].un.s.design);
    //     }
    //     printf("\n");
    // }

    int t2;
    float up; float lo;
    printf("Book(0) / Shirt(1) ?: ");
    scanf("%d",&t2);
    printf("Enter price range:");
    scanf("%f %f", &lo,&up);
    for(int i =0; i< n; i++){
        if(prod[i].type == t2){
            if(prod[i].price >= lo && prod[i].price <= up){
                printf("Price: %2f \n", prod[i].price);
                if(prod[i].type == 0){
                    printf("Title of Book: %s\n", prod[i].un.b.title);
                    printf("Author: %s\n", prod[i].un.b.author);
                    printf("No. of pages: %d\n",prod[i].un.b.pages);
                }
                else{
                    printf("Color of shirt: %s\n", prod[i].un.s.color);
                    printf("Size: %d\n",prod[i].un.s.size);
                    printf("Design: %s\n", prod[i].un.s.design);
                }
            }
        }
    }
}