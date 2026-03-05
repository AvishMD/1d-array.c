#include <stdio.h>

int main() {
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        temp=arr[i];
        int s=1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>temp){
            s=0;
            break;
            }
        }
        if(s==1){
             printf("%d ",arr[i]);
    }
    }
    return 0;
}
