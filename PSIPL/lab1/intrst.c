#include<stdio.h>
#include<math.h>
int main(){
    int p = 500000; int n = 10; float r = 3.5;
    printf("Simple Interest on Rs. %d in %d years = Rs. %0.2f\n",p,n, p*n*r/100);
    printf("Interest on Rs. %d in %d years compounded annually = Rs. %0.2f\n",p,n, p* (pow(1+r/100,n)-1));
    printf("Interest on Rs. %d in %d years compounded semi-annually = Rs. %0.2f\n",p,n, p* (pow(1+r/2/100,2*n)-1));
    printf("Interest on Rs. %d in %d years compounded quarterly = Rs. %0.2f\n",p,n, p* (pow(1+r/4/100,4*n)-1));
    printf("Interest on Rs. %d in %d years compounded monthly = Rs. %0.2f\n",p,n, p* (pow(1+r/12/100,12*n)-1));
    printf("Interest on Rs. %d in %d years compounded daily = Rs. %0.2f\n",p,n, p* (pow(1+r/365/100,365*n)-1));
}

// Write a C program intrst.c that calculates the total interest income on amount Rupees 5 lakhs in a period of 10 years. Show the results for simple interest, compounded interest when the compounding is done annually,semi-annually, quarterly, monthly and daily. Assume that the interest rate is 3.5% per year.

// Expected output:

// Simple interest on Rs. 500000.00 in 10 years = Rs. 175000.00

// Interest on Rs. 500000.00 in 10 years compounded annually = Rs. 205299.38

//   Interest on Rs. 500000.00 in 10 years compounded semi-annually = Rs. 207389.10

// Interest on Rs. 500000.00 in 10 years compounded quarterly = Rs. 208454.42

// Interest on Rs. 500000.00 in 10 years compounded monthly = Rs. 209172.41

// Interest on Rs. 500000.00 in 10 years compounded daily = Rs. 209521.87