#include <stdio.h>
#include <string.h>
int main ()
{
    int a,b,c,i,j,T,count,r,d,sum;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&a);
        for( ;a>1;a--)
        {
            printf("2^%d + ",a);
        }
        if(a==0)
        {printf("1\n");}
        else{
            printf("2 + 1\n");
        }
    }

    return 0;
}
