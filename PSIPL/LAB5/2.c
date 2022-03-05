#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void array(int arr[],int len){
    system("cls");
    printf("Array:-\n");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
void menu(int arr[], int *n){
    int l = *n;
    int choice;
    array(arr, l);
    printf("\n1. Insert Element in Array\n2. Delete Element in Array\n3. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        array(arr, l);
        int ind,ele;
        printf("\nEnter Index and Element to be inserted:-\n");
        scanf("%d %d",&ind,&ele);
        if(ind>l){
            system("cls");
            printf("Index out of range\n");
        }
        else{
            for(int i=l;i>ind;i--){
                arr[i]=arr[i-1];
            }
            arr[ind]=ele;
            l++;
        }
        sleep(1);
        menu(arr,&l);
        break;
    case 2:
        array(arr, l);
        int ind1;
        printf("\nEnter Index to be deleted:-\n");
        scanf("%d",&ind1);
        if(ind1>l){
            system("cls");
            printf("Index out of range\n");
        }
        else{
            for(int i=ind1;i<l;i++){
                arr[i]=arr[i+1];
            }
            l--;
        }
        menu(arr,&l);
        break;
    default:
        system("cls");
        break;
    }
}

int main(){
    int n;
    printf("Len of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    };
    menu(arr,&n);
    printf("%d",&n);
    return 0;
}