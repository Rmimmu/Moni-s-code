#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main() {
int x,y;

scanf("%d %d", &x, &y);

if(x>=0 && y >= 0) printf("Q1");
else if(x<=0 && y >= 0) printf("Q2");
else if(x<=0 && y <= 0) printf("Q3");
else if(x>=0 && y <= 0) printf("Q4");

if(x==0 && y==0) printf("Origem");
if (x>0) printf("Eixo X");
if (y>0) printf("Eixo y");


    return 0;
}
