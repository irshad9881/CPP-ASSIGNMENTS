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
        for(j=0;j<m;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of Matrix :B\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
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