#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int count[100],a,b,c,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",str);
        for(j=0;j<100;j++)
        {
            count[j]=0;
        }
        b=strlen(str);
        for(j=0;j<b;j++)
        {
            count[str[j]-'a']++;
        }
        for(j=0;j<b;j++)
        {
            if(count[str[j]-'a'])
                printf("%c = %d\n",str[j],count[str[j]-'a']);
            count[str[j]-'a']=0;
        }
        printf("\n");
    }
    return 0;
}
