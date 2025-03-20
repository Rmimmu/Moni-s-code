#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {

    int n;

    scanf("%d", &n);
    
    char str[10000];

    scanf("%s", str);

    int sum=0;
if(n==strlen(str)){
    for(int i=0;i<strlen(str); i++){

        if(str[i]<48 && str[i]>57) break;

        sum += (str[i]-'0');


    }

    printf("%d", sum);

}
    return 0;
}
