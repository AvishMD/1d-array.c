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
        int count=0;
        for(int j=0;j<i;j++){
            if(temp==arr[j]){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d ",temp);
        }
    }
    return 0;
}
