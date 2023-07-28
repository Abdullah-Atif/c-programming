#include <stdio.h>
#include <string.h>

void main()
{
    char str[200];
    int count = 0, i,j,a,b;
    scanf("%d",&a);
    for(j=0;j<a;j++){
           /// scanf("%d",&b);
    scanf(" %[^'\n']",str);
    count=0;
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;
    }
    printf("%d\n", count + 1);
    }
}
