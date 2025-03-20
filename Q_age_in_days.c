#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
int n;
scanf("%d", &n);
int y,m,d;

y = n / 365;

n %= 365;

m = n/30;

n %= 30;

d = n;

printf("%d years\n%d months\n%d days", y, m, d);


    return 0;
}
