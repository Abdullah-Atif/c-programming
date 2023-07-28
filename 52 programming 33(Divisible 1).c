
#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,T,count;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&a,&b,&c);
        for(i=a;i<=b;i++)
        {
           if(i%c==0)
           {
               printf("%d\n",i);
           }
        }
            printf("\n");
    }

    return 0;
}
