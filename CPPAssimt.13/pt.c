/*#include<stdio.h>//fibonacci series;
int main()
{
    int n,i,a1=-1,a2=1,a3;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a3=a1+a2;
        printf("%d ",a3);
        a1=a2;
        a2=a3;
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i,n,pos ,num,a[1000];
    printf("ENter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elment:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Numbers are:\n");
    for(i=0;i<n;i++)
    printf("%d =a[%d]\n",i,a[i]);
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the position:\n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
        n=n+1;
        a[pos]=num;
    for(i=0;i<n;i++)
    printf("%d =a[%d] \n",i,a[i]);
    return 0;
  }
  */
/*#include<stdio.h>
int main()
{
    int i,n,pos ,num,a[1000];
    printf("ENter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elment:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Numbers are:\n");
    for(i=0;i<n;i++)
    printf("%d =a[%d]\n",i,a[i]);
    //printf("Enter the number:\n");
    //  scanf("%d",&num);
    printf("Enter the position:\n");
    scanf("%d",&pos);
    printf("Numbers are :\n");
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
        n=n-1;
    for(i=0;i<n;i++)
    printf("%d \n",a[i]);
    return 0;
  }
  */
 /*#include<stdio.h>//bubble sort
 void f(int[],int );
 int main()
 {
    int i,j,n,a[100];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter number of of element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    f(a,n);
    return 0;
 }
 void f(int a[],int n)
 {
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            { 
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Numbers are:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
 }*/
 /*#include<stdio.h>//itnsertion sort
 void f(int[],int);
 int main()
 {
    int i,n,a[1000];
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    f(a,n);
    return 0;
 }
 void f(int a[],int n)
 {
    int i,j,temp;
    for(i=0;i<n;i++)
    {     temp=a[i];
         for(j=i-1;j>=0&&a[j]>temp;j--)
         a[j+1]=a[j];
         a[j+1]=temp;
    }
    printf("Numbers are:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
 }
 */
/*#include<stdio.h> //sequential search:
void f(int a[],int n,int item);
int main()
{
    int i,j,n,a[100],item;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Numbers are:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter item");
    scanf("%d",&item);
    f(a,n,item);
    return 0;
}
void f(int a[],int n,int item)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("%d number is found:",item);
            count++;
        }
    }
    if(count==0)
    {
        printf("Number not found:");

    }
}*/
/*#include<stdio.h>//bianry search:
void f(int a[],int n,int item);
void sort(int a[],int n);
int main()
{
    int i,j,n,item,a[100];
    printf("Enter size :\n");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    printf("\nEnter item:\n");
    scanf("%d",&item);
    f(a,n,item);
}
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
        }
    }
    printf("\nsorted array are:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}
void f(int a[],int n,int item)
{
    int i,l=0,u=n-1,m;
    while(l<=u)
    {  m=(l+u)/2;
        
        if(a[m]==item)
        printf("%d item id foound:\n");
        else if(item>=a[m])
        {
            l=m+1;
        }
        else
        {
            u=m-1;
        }
    }
    printf("%d is not found:\n",item);
}
*/
/*#include<stdio.h>
int main()
{
    int i,j,n,m,p,q;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the row and colum:A\n");
    scanf("%d %d",&p,&q);
    printf("Enter row and colum:B\n");
    scanf("%d %d",&n,&m);
    //printf("Matrix can not be added :");
    if(n!=p&&m!=q)
    {
         printf("Matrix can not be added :\n");
        return 0;
    }
    printf("Matrix can be added:A\n");
    printf("Enter matrix:A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("Enter mtrix:B\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Added matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
  int a[100],n,i;
  printf("Enter the size:\n");
  scanf("%d",&n);
  printf("Enter number:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Number are:\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
return 0;

}
*/
#include<stdio.h>
int main()
{
  int a[100],n,i,sum=0;
  printf("Enter the size:\n");
  scanf("%d",&n);
  printf("Enter number:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("sum are:\n");
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];

  }
  
    printf("%d",sum);

return 0;

}