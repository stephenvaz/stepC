#include<stdio.h>
#include<unistd.h>
#define clear() printf("\033[H\033[J") 

void array(int arr[],int len){
    clear();
    printf("Array:-\n");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
void menu(int arr[], int *n){
    int choice,l = *n;
    array(arr, l);
    printf("\n1. Insert Element in Array\n2. Delete Element in Array\n3. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        array(arr, l);
        int ind,ele;
        printf("\nEnter Position and Element to be inserted:-\n");
        scanf("%d %d",&ind,&ele);
        if(ind-1>l){
            clear();
            printf("Position out of range\n");
        }
        else{
            for(int i=l;i>ind-1;i--){
                arr[i]=arr[i-1];
            }
            arr[ind-1]=ele;
            l++;
        }
        sleep(1);
        menu(arr,&l);
        break;
    case 2:
        array(arr, l);
        int ind1;
        printf("\nEnter Position of element to be deleted:-\n");
        scanf("%d",&ind1);
        if(ind1-1>l){
            clear();
            printf("Position out of range\n");
        }
        else{
            for(int i=ind1-1;i<l;i++){
                arr[i]=arr[i+1];
            }
            l--;
        }
        menu(arr,&l);
        break;
    default:
        clear();
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
    return 0;
}