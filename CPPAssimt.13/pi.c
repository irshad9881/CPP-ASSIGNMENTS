#include<stdio.h>
void sort(int b[],int m);
void binary_search(int a[],int n,int item);
int main()
{
    int i,j,n,a[1000],item ;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("\nEnter the element:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   
    sort(a,n);
     printf("\nEnter the item:\n");
    scanf("%d",&item);
    binary_search(a,n,item);
    return 0;

    
}
void sort(int b[],int m)
{
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        
    }
    for(i=0;i<m;i++)
        printf("%d ",b[i]);
}
void binary_search(int a[],int n,int item)
{
    int mid;
    int l=0,u=n-1;
    while(l<=u)
    {   mid=(l+u)/2;
       // for(j=0;j<n;j++)
        if(item==a[mid])
        {
          printf("\n %d Element found ",item);
          return;
        }
        else if(item>a[mid])
        {
         l=mid+1;
        }
        else
        {
          u=mid-1;
        }
    }
    printf("\nElement is not found :");

}
