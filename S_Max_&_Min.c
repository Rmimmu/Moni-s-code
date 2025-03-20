#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
int a,b,c;

scanf("%d %d %d", &a, &b, &c);

int max,min;

if( a>b && a>c) max = a;
else if (b>c && b>a) max = b;
else max = c;

if( a<b && a<c) min = a;
else if (b<c && b<a) min = b;
else min = c;

printf("%d %d", min, max);
    
    return 0;
}
