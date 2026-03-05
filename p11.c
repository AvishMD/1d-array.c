#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int right,left;
    for(int i=0;i<n;i++){
        right=0;
        left=0;
        for(int j=0;j<i;j++){
            left=left+arr[j];
        }
        for(int j=i+1;j<n;j++){
            right=right+arr[j];
        }
        if(left==right){
            printf("%d",i);
            break;
        }
    }

    return 0;
}
