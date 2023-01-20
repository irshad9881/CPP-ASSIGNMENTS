/*#include<stdio.h>//insertion sort
int main()
{
    int i,n,a[10000],j;
    printf("Enter the size :\n");
    scanf("%d",&n);
    printf("******************\n");
    printf("Numbers are :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {  int temp=a[i];
        for(j=i-1;j>=0&&a[j]>temp;j--)
        {
            a[j+1]=a[j];
        }
            a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/
#include<stdio.h>//insertion sort
void f(int [],int );
int main()
{
    int i,n,a[10000],j;
    printf("Enter the size :\n");
    scanf("%d",&n);
    printf("******************\n");
    printf("Numbers are :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    f(a,n);
    return 0;
}
    void f(int a[],int b)
    {
        int i,j;
        for(i=1;i<b;i++)
        {   
            int temp=a[i];
            for(j=i-1;j>=0&&a[j]>temp;j--)
            {
            a[j+1]=a[j];
            }
            a[j+1]=temp;
        }
        for(i=0;i<b;i++)
        {
        printf("%d ",a[i]);
        }
    }
