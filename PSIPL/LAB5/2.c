#include <stdio.h>
#include<stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void menu(int arr[], int n){
    system("cls");
    int choice;
    printf("Array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n1. Insert Element in Array\n2. Delete Element in Array\n3. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("cls");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }   
        int ind,ele;
        printf("\nEnter Index and Element to be inserted:-\n");
        scanf("%d %d",&ind,&ele);
        if(ind>n){
            printf("Index out of range\n");
        }
        else{
            for(int i=n;i>ind;i--){
                arr[i]=arr[i-1];
            }
            arr[ind]=ele;
            n++;
            system("cls");
            printf("Array: \n");
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
            }
        }
        Sleep(1000);
        menu(arr,n);
        break;
    case 2:
        system("cls");
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
    menu(arr,n);
    printf("\n%d",n);
    return 0;
}