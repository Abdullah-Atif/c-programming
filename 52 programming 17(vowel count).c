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
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
            {
               count++;
            }
        }
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}
