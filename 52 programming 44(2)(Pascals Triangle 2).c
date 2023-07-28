#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,k,T,n,count,r,d,sum;
    long long int pascal[51][51];
    pascal[1][0]=1;
    pascal[2][0]=1;
    pascal[2][1]=1;
    for(i=3;i<=10;i++)
    {
        pascal[i][0]=1;
        for(j=1;j<i-1;j++)
        {
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
        pascal[i][j]=1;
    }

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        n=n+1;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("%lld ",pascal[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
     return 0;
}
