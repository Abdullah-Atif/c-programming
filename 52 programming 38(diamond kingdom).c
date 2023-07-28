#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,T,count,r,d,temp;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&a,&b);
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
               {
                   printf("%d",b);
                   if(j!=i)
                   {
                       printf(" ");
                   }
               }
        printf("\n");
        }
        for(i=a-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
               {
                   printf("%d",b);
                   if(j!=i)
                   {
                       printf(" ");
                   }
               }
        printf("\n");
        }
    }

    return 0;
}
