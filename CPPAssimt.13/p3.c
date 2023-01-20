#include<stdio.h>
int main()
{
    int i,n,a[1000];
    printf("Enter the size :\n");
    scanf("%d",&n);
    printf("********************\n");
    printf("Enter Numbers is:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("*******************\n");
    printf("Numers are ..");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}