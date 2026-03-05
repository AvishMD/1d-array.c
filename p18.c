#include <stdio.h>
int main() {
    int n,max=1,count=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>max){
            max=count;
        }
    }
    printf("%d",max);
    return 0;
}
