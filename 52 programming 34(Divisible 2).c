
#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,T,count;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=1;i<c;i++)
        {
           if(i%a==0&&i%b==0)
           {
               printf("%d\n",i);
           }
        }
            printf("\n");
    }

    return 0;
}
