#include<stdio.h>

int main(){
    float temp;
    printf("Enter Temperature(F): ");
    scanf("%f", &temp);
    printf("Temperature(C): %0.2f Centigrade\n", (temp-32)*5/9);
}

//  Write a C program temp.c that accepts a temperature in Fahrenheit and  prints the corresponding temperature in Celsius.

// Test data and expected output:

// Enter temp in Farenheit:98.4

// Temp 98.40 in Farenheit = 36.89 Centigrade