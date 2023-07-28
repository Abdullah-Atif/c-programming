#include <stdio.h>

#include <string.h>
int main ()
{
    int a,b,c,i,j,T,count,r,d,sum;
    int odd[21],even[21];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&a);
        a=a+1;
        even[0]=1;
        even[1]=1;
        printf("%d\n%d %d\n",even[0],even[0],even[1]);
        for(i=3;i<=a;i++)
        {
            if(i%2==0)
            {
                even[0]=1;
                //printf("%d ",even[0]);
                for(j=1;j<i-1;j++)
                {
                even[j]=odd[j-1] + odd[j];
                //printf("%d ",even[j]);
                }
                even[j]=1;
                ///printf("|%d| ",even[j-1]);
                for(j=0;j<i;j++)
                {
                   printf("%d ",even[j]);
                }
        printf("\n");
            }
            else
            {
                odd[0]=1;
                //printf("%d ",odd[0]);
                for(j=1;j<i-1;j++)
                {
                odd[j]=even[j-1] + even[j];
                //printf("%d ",odd[j]);
                }
                odd[j]=1;
                //printf("%d ",odd[j]);
                for(j=0;j<i;j++)
                {
                  printf("%d ",odd[j]);
                 }
        printf("\n");
            }

    }
    printf("\n");
    }
     return 0;
}
