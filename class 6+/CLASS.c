/*#include<stdio.h>
int main()
{
    int num,n,pos,i;
    int a[10];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter element ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=n-1;i>=pos;i--)
    a[i+1]=a[i];
    n=n+1;
    a[pos]=num;
    printf("Array element after insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,n,a[100],pos;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);//scanf me %d ke bad space dene se input do bar lega:
    printf("Enter the position");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    a[i]=a[i+1];
    n=n-1;
    printf("Array elements after deltion:");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d \n ",i,a[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,j,m,n,p,q,a[10][10],b[10][10],c[10][10];
    printf("Enter Row and colum matrix A;");
    scanf("%d %d",&p,&q);
    printf("ENter the Row and Colum of matrix B:");
    scanf("%d %d",&n,&m);
    if((p!=n)&&(q!=m))
    {
        printf("Matrix can't added:");
        return  (0);
    }
    printf("Matrix can be added:\n");
    printf("Enter element of  matirx:A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;i++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of Matrix :B\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;i++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Print matrix :A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("Print matrix :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Add matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Add matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}