// Add some code
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int count,a,b,c,i,j,k,word;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        count=0;
        scanf(" %[^'\n']",str);
        word = strtok(str,",!;?. ");
        while(word!=NULL)
        {
            if(strlen(word)>0)
            {
                count++;
            }
            word = strtok(NULL,",!;?. ");
        }
        printf("Count = %d\n",count);

    }
    return 0;
}
