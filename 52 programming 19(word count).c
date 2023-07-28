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


        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==' ')
                count ++;
        }
        printf("Count = %d\n",count+1);

    }
    return 0;
}
