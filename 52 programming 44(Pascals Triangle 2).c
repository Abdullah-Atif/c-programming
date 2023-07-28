#include <stdio.h>
#include <string.h>
int fact(int a)
{
    int f=1,i;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int ncr(int n,int r)
{
    int a;
    a=fact(n)/(fact(r)*fact(n-r));
    return a;
}
int main ()
{
    int a,b,c,i,j,k,T,n,count,r,d,sum;
    int odd[21],even[21];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        ///printf("1\n");
        for(i=0;i<=n;i++)
        {
            /*for(k=1;k<=n-i;k++)
               {
                   printf(" ");
               }*/
            for(j=0;j<=i;j++)
               {
                  printf("%d ",ncr(i,j));
               }
               printf("\n");
        }
    }
     return 0;
}
