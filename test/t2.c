#include <stdio.h>

int main()
{
    int a[100][100], m, n, year;
    int temp[100];
    printf("Enter the Number of Employees - \n");
    scanf("%d",&n);
    printf("Enter the current year - \n");
    scanf("%d",&year);
    m = year;
    for (int i = 0 ; i<n ; i++)
    {
        printf("Enter the %d Employee ID - \n",i+1);
        scanf("%d",&a[i][0]);
        printf("Enter the age of the %d Employee - \n",i+1);
        scanf("%d",&a[i][1]);
    } 
    for (int i = 0 ; i<n ; i++)
    {
        while(a[i][1] != 65)
        {
            a[i][1]++;
            year++;
        }
        a[i][2] = year;
        year = m;
    }
    for (int i = 0 ; i<n ; i++)
    {
        if(a[i][1] == -1){
            continue;
        }
        printf("\nYear of Retirement - %d \n",a[i][2]);
        printf("List of Employees -\n");
        for (int j = 0 ; j<n ; j++)
        {
            if (a[j][2] == a[i][2])
            {
                printf("%d\n",a[j][0]);
                a[j][1] = -1;
            }
            
            
        }
        
    }
    return 0;
}