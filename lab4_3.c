#include<stdio.h>
int main()
{
char a[200];
int i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]!=a[i+1])
    printf("%c",a[i]);
}
return 0;
}
