#include <stdio.h>

int main() {
    int a,m=0,i;
    int count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=1;i<=a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>m){
            m=arr[i];
            count++;
        }
    }
    if(count==0)
        printf("No");
    else
    printf("Yes");
    return 0;
}
