
#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,T,count;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&a,&b);
         if(a>b)
            printf("Invalid!");
            else
            {
                for(i=a,c=a,j=2;c<=b; j++)
                {
                    printf("%d\n",c);
                    c=j*i;
                }

            }
            printf("\n");
    }

    return 0;
}
