#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the number of flights: ");
    scanf("%d",&n);
    struct air
    {
        char start[4];
        char dest[4];
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
        scanf("%d", &a[i].seats);
    }
    char stu[4];
    char deu[4];
    printf("Enter the start and destination query:\n");
    printf("Start : ");
    scanf("%s",stu);
    printf("Destination : ");
    scanf("%s",deu);
    // printf("%s %s",stu,deu);
    int ch,flag = 0;
    for (int i = 0; i<n;i++){
        if(strcmp(stu,a[i].start)==0 && strcmp(deu,a[i].dest)==0){
            if(a[i].seats>0){
                flag = 1;
                printf("%s-%s %d %d %d\nBook?(0-N,1-Y): ",a[i].start,a[i].dest,a[i].startT,a[i].arrT,a[i].seats);
                scanf("%d",&ch);
                if(ch == 1){
                    a[i].seats--;
                    printf("%s - %s\n%d - %d\nSeats: %d\n",a[i].start,a[i].dest,a[i].startT,a[i].arrT,a[i].seats);
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                printf("Sorry! No Seats Available");
            }
        }
    }
    if(flag == 0){
        printf("Sorry! No Flights Available for this route");
    }
}