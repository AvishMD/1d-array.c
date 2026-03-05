#include <stdio.h>
int main() {
    int n,min=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            min=arr[i];
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<min){
            min=arr[i];
        }
    }
    if(min <= 0)
        printf("No Positive");
    else
        printf("%d",min);
    return 0;
}
