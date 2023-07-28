#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int count,a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        count=0;
        scanf(" %[^'\n']",str);

         b=strlen(str);
        for(j=b-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
