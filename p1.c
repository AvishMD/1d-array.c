#include <stdio.h>

int main() {
    int size,max=0,smax=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=1;i<=size;i++){
        if(arr[i]>smax && arr[i]!=max)
        smax=arr[i];
    }
    printf("%d",smax);
    

    return 0;
}
