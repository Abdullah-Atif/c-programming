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
        a=strlen(str);
        for(j=0;j<a;j++)
        {
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
            {
              printf("%c",str[j]);
            }

        }
        printf("\n");
        for(j=0;j<a;j++)
        {
            if(str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u'&&str[j]!=' ')
            {
              printf("%c",str[j]);
            }

        }
        printf("\n");

    }
    return 0;
}
