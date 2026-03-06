#include <stdio.h>

int main()
{
    int n,i;
    int a[100];
    int max1=-9999,max2=-9999;
    int min1=9999,min2=9999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }

        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2)
        {
            min2=a[i];
        }
    }
    int p1=max1*max2;
    int p2=min1*min2;
    if(p1>p2)
        printf("%d",p1);
    else
        printf("%d",p2);

    return 0;
}
