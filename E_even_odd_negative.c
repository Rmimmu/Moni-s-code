#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

// int arr[n];
int counteven=0,countodd=0,countneg=0, countpos=0;

for(int i=0;i<n;i++){
    int x;
    
    scanf("%d", &x);

   
   

    x %2 ? countodd++ : counteven++;

    if(x==0) continue;
    x<0 ? countneg++ : countpos++;
}


printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", counteven, countodd, countpos, countneg);
return 0;

}
