#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int count,a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       scanf("%s",str);
       b=strlen(str);
       for(j=0;j<b;j++)
       {
           printf("%d",str[j]-64);
       }
       printf("\n");
    }
    return 0;
}
