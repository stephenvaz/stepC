#include<stdio.h>

int prime(int x);
int mobius(int n);

void main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);

   printf("The Mobius output of %d is %d", num ,mobius(num));
}

int prime(int x)
{
    int i ;
    for ( i = 2; i*i <= x; i++)
    {
        if (x%i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int mobius(int n)
{
   int j ,ctr = 0;
    
    if (n==1)
    {
        return 1;
    }
    
    for ( j = 2; j <= n; j++)
    {
        if (prime(j) && n%j==0)
        {
            if (n % (j*j) == 0)
            {
                return 0;
            }
            else{
            ctr++;
            }
        }
        
    }
    if (ctr%2==0)
        {
            return 1;
        }
        else
            {return -1;}

}