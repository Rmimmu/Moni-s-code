#include<stdio.h>

void fib(int n){

int fibo0=0;
int fibo1=1;
int f;

for(int i =0;i<n;i++) {

   printf("%d", fibo0);

    f = fibo0 + fibo1;

    fibo0=fibo1;

    fibo1=f;

}

}


int main(){

int n;
scanf("%d", &n);

fib(n);

return 0;

}
