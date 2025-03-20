#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
char ch;

scanf("%c", &ch);

isalpha(ch) ? printf("ALPHA") :printf("DIGIT");

printf("\n");

isalpha(ch) && isupper(ch) ? printf("IS CAPITAL") : printf("IS LOWER");



    return 0;
}
