#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

int min = __INT_MAX__;
int idx;
int arr[n];
for(int i=0;i<n;i++){
    
    
    scanf("%d", &arr[i]);

   if(arr[i]< min) {
    min = arr[i];
    idx = i;

   }
   

  
}

printf("%d %d", min, idx + 1);


return 0;

}
