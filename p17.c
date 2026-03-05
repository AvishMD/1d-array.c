#include <stdio.h>
int main() {
    int n,s=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            s=0;
            break;
        }
    }
    if(s==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
