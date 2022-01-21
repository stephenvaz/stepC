#include<stdio.h>
#include<string.h>
int main() {

    char string[50] = "Hello world";
   // Extract the first token
   char * token = strtok(string, " ");
   printf( " %s\n", token ); //printing the token
   return 0;
    // int a[3][3];
    // int i, j;
    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         int test;
    //         scanf("%d", &test);
    //         a[i][j] = test;
            
    //     }
    // }
    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

}