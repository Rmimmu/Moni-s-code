#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
char str[100000];

gets(str);

for(int i=0; i<strlen(str);i++) {
    if(str[i]==',') str[i]= ' ';

    if(isupper(str[i])) str[i]= tolower(str[i]);
    else if(islower(str[i])) str[i] = toupper(str[i]);
}

printf("%s", str);
    return 0;
}
