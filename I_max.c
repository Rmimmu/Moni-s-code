#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

int max= 0;
int idx;
int arr[n];
for(int i=0;i<n;i++){
    
    
    scanf("%d", &arr[i]);

   if(arr[i] > max) {
    max = arr[i];
    

   }
   

  
}

printf("%d ", max);


return 0;

}
