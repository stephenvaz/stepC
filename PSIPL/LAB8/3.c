#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    struct air
    {
        char start[3];
        char dest[3];
        int startT;
        int arrT;
        int seats;
    }a[n];

    for(int i = 0; i < n; i++){
        printf("Start: ");
        scanf("%s",a[i].start);
        printf("Destination: ");
        scanf("%s",a[i].dest);
        printf("Start Time:");
        scanf("%d",&a[i].startT);
        printf("Arrival Time:");
        scanf("%d",&a[i].arrT);
        printf("No. of seats: ");
        scanf("%d", a[i].seats);
    }
    char stu[3];
    char deu[3];
    printf("Enter start and destination: ");
    scanf("%s %s",stu,deu);
    for (int i = 0; i<n;i++){
        if(strcmp(stu,a[i].start)==0 && strcmp(deu,a[i].dest)==0){
            if(a[i].seats>0){
                int ch;
                printf("%d: %s %s %d %d %d\nBook?(0-Y,1-N): ",i+1,a[i].start,a[i].dest,a[i].startT,a[i].arrT,a[i].seats);
                scanf("%d",&ch);
                if(ch == 0){
                    a[i].seats--;
                    printf("%d: %s %s %d %d %d\n",i+1,a[i].start,a[i].dest,a[i].startT,a[i].arrT,a[i].seats - 1);
                    break;
                }
            }
        }
    }



}