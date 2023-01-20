/*#include<stdio.h>//binary search time complecity is o(log2 n)
void binary_search(int a[],int n,int item);
int main()
{
    int a[]={1,2,4,5,6,7,8,9,10,12},n;
    int item=100;
     binary_search(a,10,item);
     return 0;
}
void binary_search(int b[],int N,int item)
{
    int l=0,u=N-1,m;
    while(l<=u)
{
    m=(l+u)/2;
    if(item==b[m])
    {
        printf(" Num is found like  index :\n a[%d]=%d:",m,item);
        return ;
    }
    else if(item>b[m])
    {
        l=m+1;
    }
    else
    {
        u=m-1;
    }
}
printf("%d num is not found in list:\n",item);
}*/
#include<stdio.h>//binary search time complecity is o(log2 n)
void binary_search(int a[],int n,int item);
void sort(int[],int );
int main()
{
    int a[100],n;
    int item,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("***************************\n");
    printf("Enter number of elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("******************************\n");
    sort(a,n);
    printf("\n*****************************\n");
    printf("\nEnter then item:\n");
    scanf("%d",&item);
    binary_search(a,n,item);
    return 0;
}
void sort(int a[],int n)
    {
        int i,j,temp;
        for(i=0;i<n;i++)
        {   
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("\nSorted elements are :\n");
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
    }
void binary_search(int b[],int N,int item)
{
    int l=0,u=N-1,m;
    while(l<=u)
{
    m=(l+u)/2;
    if(item==b[m])
    {
        printf("\n %d Number is found in list:\n :",item);
        return;
    }
    else if(item>b[m])
    {
        l=m+1;
    }
    else
    {
        u=m-1;
    }
}
printf("\n %d Number is not found in list:\n",item);
}
    


    

