#include <stdio.h>
#include <string.h>
int fact(int a)
{
    int c,j;
     c=1;
       for(j=1;j<=a;j++)
       {
           c=c*j;
       }
       return c;
}
int main()
{
    int i,j,a,b,c,d,count;
    char str[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        count=0;
        scanf(" %[^'\n']",str);
        for (j = 0;str[j] != '\0';j++)
    {
        if (str[j] == ' ' && str[j+1] != ' ')
            count++;
    }
    c=fact(count+1);
    printf("%d/%d\n",count,c);
    }
    return 0;
}
