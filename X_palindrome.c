#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {

    int n;

    scanf("%d", &n);

    char str[100000];
     
    itoa(n, str, 10 );

    char str1[10000];
    int sz = strlen(str);

    for(int i= sz-1, j=0; i>=0; i--,j++) {printf("%c", str[i]); str1[j]=str[i];}
    printf("\n");

    int ok =1;
   for(int i=0;i<strlen(str1); i++){

     if(str1[i] != str[i]) ok =0;

   }
 
   ok ? printf("Yes") : printf("No");

    return 0;
}
