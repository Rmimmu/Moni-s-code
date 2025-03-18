#include<stdio.h>
int main() {

int n;
scanf("%d", &n);

int arr[n];

for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
}




int a, counter =1, index;
int start=0, end=n-1;

scanf("%d", &a);

while(start<=end) {

    int mid = (start+end)/2;
    if(arr[mid]==a){
            index = arr[mid];
        printf("%d", index);
        return 0;
    }
        else if(arr[mid]<a) {

            start=mid+1;
            counter++;
        }
    else {
        end = mid-1;
        counter++;
    }

}


printf("-1");
return 0;
}
