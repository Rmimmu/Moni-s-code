#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main() {

    int n;

    scanf("%d", &n);
int ok =1;
    for(int i=2; i <= sqrt(n); i++) {
        if (n % i ==0) ok =0;
    }

    ok ? printf("YES") : printf("NO");
    return 0;
}
