
#include<stdio.h>
int main()
{ 
    printf("enter");
    char str[10];
    //for(int i;str[i]='\0';i++)
    gets(str);
   // scanf("%s",str);
    for(int i=0;i<10;i++)
    printf("%c",str[i]);
    return 0;
}