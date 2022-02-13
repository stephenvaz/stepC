#include<stdio.h>

int prime(int n);
int mobius(int n);

void main()
{
   int num , b ;
   printf("Enter the number: ");
   scanf("%d",&num);

   printf("The Mobius output of %d is %d", num ,mobius(num));
}
int prime(int n)
{
    int i;
    for ( i = 2; i <= n; i++)
    {
        if (n%1 == 0)
        {
            return 0;
        }
        return 1;
    }

}

int mobius(int n)
{
   int i , y , ctr=0;
       if (y==1)
       {
          return 1;
       }
       for ( i = 2; i <= y; i++)
       {
           if (y%1==0 && prime(y))
           {
               if (y % (i*i) == 0)
               {
                  return 0;
               }
               else
               ctr++;
           }
           if (ctr%2==0)
           {
               return 1;
           }
           else
               return -1;
       }
 
   }