#include <stdio.h>
#include<ctype.h>
int main() {
  char sr[1000] , g[11][5]={"i","of","the","on","at","for", "with", "a", "an" , "in" ,"and"} ;
  char *x;
  int a=0,b,c=0,i=0,j;
  scanf("%[^\n]s",sr);
  for(j=0; sr[j]!='\0'; j++)
  {
        if(sr[j]>='a'&&sr[j]<='z'||sr[j]==' ')
        {
            i++;
        }
  }
  if(strlen(sr)==i)
  {
       x= strtok(sr," ");
  while(x != NULL)
    {
        for(b=0;b<11;b++)
          if(strcmp(x,g[b]))
            c++;
        if(c==11||a==0)
         {
             printf("%c",toupper(x[0]));
         }

    x= strtok(NULL," ");
    a++, c=0;
   }
    }
return 0;
}
