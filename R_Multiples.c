#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
int a,b;

scanf("%d %d", &a, &b);

a % b ==0 || b % a ==0 ? printf("Multiples") : printf("No Multiples");
    
    return 0;
}
