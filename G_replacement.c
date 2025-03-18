#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

int min = __INT_MAX__;
int idx;
int arr[n];
for(int i=0;i<n;i++){
    
    
    scanf("%d", &arr[i]);

    if(arr[i]==0) continue;
   arr[i] < 0 ? arr[i]=2 : arr[i] = 1;
   

  
}

for(int i=0;i<n;i++) printf("%d ", arr[i]);


return 0;

}
