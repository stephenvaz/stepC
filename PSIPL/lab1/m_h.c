#include<stdio.h>

int main() {
    int min;
    printf("Enter minutes: ");
    scanf("%d", &min);
    printf("%d hours and %d minutes\n", min/60, min%60);
}