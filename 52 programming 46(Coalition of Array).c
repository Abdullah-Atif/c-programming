#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    int a,b,c,i,j,k,n,count,r,d,sum,area,s;
    int T;int arr1[1000],arr2[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr1[i]);
        }
        for(i=0;i<b;i++)
        {
            scanf("%d",&arr2[i]);
        }
        for(i=0,j=0;i<a,j<b;i++,j++)
        {
            if(arr1[i]<arr2[j])
            {
                printf("%d %d ",arr1[i],arr2[j]);
            }
            else{
               printf("%d %d ",arr1[i],arr2[j]);
            }
        }
        printf("\n");
}
     return 0;
}
