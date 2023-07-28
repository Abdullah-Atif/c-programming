#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        k=0,c=0;
        scanf(" %[^'\n']",str);
        for(j=0;j<=strlen(str);j++)
        {
            if(str[j]==' '||str[j]=='\0')
            {
                for(k=j-1;k>=c;k--)
                {
                    printf("%c",str[k]);
                }
                printf(" ");
                c=j+1;
            }
        }
        printf("\n");
    }
    return 0;
}
