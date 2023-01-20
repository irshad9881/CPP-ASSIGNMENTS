#include<stdio.h>
    int main()
{
    int i,a[100],n,sum=0;
    printf("Enter the size :\n");
    scanf("%d",&n);
    printf("******************\n");
    printf("Number is:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("*******************\n");
    printf("sum =%d ",sum);
    return 0;
}