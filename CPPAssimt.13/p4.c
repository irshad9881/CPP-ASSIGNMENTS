#include<stdio.h>
void f(int [],int);//bubble sort:
int main()
{int a[100],n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter num:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   f(a,n);
   return 0;
}
void f(int a[],int b)
{
    int i,j,temp;
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }

    }
    for(i=0;i<b;i++)
    {
     printf("%d ",a[i]);
    }
}