#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
 int closest=arr[0];
    for(int i=0;i<n;i++){
        int a=arr[i]<0?-arr[i]:arr[i];
        int b=closest<0?-closest:closest;
        if(a<b||(a==b&&arr[i]>closest))
        closest=arr[i];
    }
 printf("%d",closest);

    return 0;
}
