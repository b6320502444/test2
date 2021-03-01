#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    char a[n][50];
    if(n<100)
    {
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        for (i=0;i<n;i++)
        {
            k=1;
            for(j=0;a[i]!='\0';j++)
              if(a[i][j]>='A'&&a[i][j]<='E')
              {
                if(a[i][j]=='A')
                {
                    if(k==1)
                        k=1;
                    else if(k==2)
                        k=3;
                    else if(k==3)
                        k=2;
                    else
                        k=4;
                }
                else if(a[i][j]=='B')
                {
                    if(k==1)
                        k=4;
                    else if(k==2)
                        k=2;
                    else if(k==3)
                        k=3;
                    else
                        k=1;
                }
                else if(a[i][j]=='C')
                {
                    if(k==1)
                        k=3;
                    else if(k==2)
                        k=4;
                    else if(k==3)
                        k=1;
                    else
                        k=2;
                }
                else if(a[i][j]=='D')
                {
                    if(k==1)
                        k=2;
                    else if(k==2)
                        k=1;
                    else if(k==3)
                        k=4;
                    else
                        k=3;
                }
                else if(a[i][j]=='E')
                {
                    if(k==1)
                        k=4;
                    else if(k==2)
                        k=3;
                    else if(k==3)
                        k=2;
                    else
                        k=1;
                }
              }
            else
                break;
        printf("%d\n",k);
        }
    }
return 0;
}
