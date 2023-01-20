#include<stdio.h>//sequential or liner search:
int main()
{
    int i,j,n,a[100],num,count=0;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter the element :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Numbers are.:\n");
    for(i=0;i<n;i++)
    {
    printf("%d =a[%d]:\n",i+1,a[i]);
    }
    printf("Enter the number :\n");
    scanf("%d",&num);
    printf("**********************\n");
   
    
    for(i=0;i<n;i++)
    {
         if(a[i]==num)
         {
            printf("%d is prisent at the position a[%d]:\n",num,a[i]);
            count++;
         }
    }
    if(count==0)
    {
        printf("%d\n:*********:is not found in the list of element:**********\n",num);
    }
    return 0;
}