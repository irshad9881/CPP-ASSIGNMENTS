#include<stdio.h>
void f(int );
int main()
{
    int n;
    printf("Enter num :\n");
    scanf("%d",&n);
    f(n);
    return 0;
//printf("print given num:\n");
//printf("%d %d",a1,a2);
}
void f(int a)
{    int a1=-1,a2=1,a3,i;

    for(i=0;i<a;i++)
    {
        a3=a1+a2;
        printf("%d ",a3);
        a1=a2;
        a2=a3;
        }
}
/*#include<stdio.h>
 int f(int );
int main()
{
    int n,i;
    printf("Enter the num:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",f(i));
    return 0;
}
    int f(int a)
    {
       if(a==0) 
       return 0;
       else if(a==1)
       return 1;
       else
       return f(a-1)+f(a-2);
      
    }*/
    
