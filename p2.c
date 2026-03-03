#include <stdio.h>

int main() {
    int n,mark,count=0;
    scanf("%d",&n);
    scanf("%d",&mark);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==mark)
        count++;
    }
    printf("%d",count);
    return 0;
}
