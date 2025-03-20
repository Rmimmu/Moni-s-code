#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
int n;

scanf("%d", &n);

char str[100000];

itoa(n,str,10);

(str[0] - '0') % 2 == 0 ? printf("EVEN") : printf("ODD");



    return 0;
}
