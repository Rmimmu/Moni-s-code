#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
int a,b,c,d;

scanf("%d %d %d %d", &a, &b, &c, &d);

int mul = a*b*c*d;

int one = mul % 10;

mul /= 10;
int two = mul %10;

printf("%d%d", two,one);





    return 0;
}
