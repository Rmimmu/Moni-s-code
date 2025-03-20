#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
char ch;
scanf("%c", &ch);

(ch >= 'A'  && ch <= 'Z') ?  printf("%c", tolower(ch)) : printf("%c", toupper(ch)) ;
    
    return 0;
}
