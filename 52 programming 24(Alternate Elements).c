// Add some code
#include <stdio.h>
#include <string.h>
int main()
{
    int arr[100],a,b,c,d,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       scanf("%d",&b);
       for(j=0;j<b;j++)
       {
           scanf("%d",&arr[j]);
       }
       for(j=0;j<b;j=j+2)
       {
           printf("%d ",arr[j]);
       }
       printf("\n");
    }
    return 0;
}
