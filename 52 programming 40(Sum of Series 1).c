#include <stdio.h>
#include <string.h>
int power(int a,int b)
{
    int i=1;
    for( ;b>0;b--)
    {
        i=a*i;
    }
    return i;
}

int main ()
{
    int a,b,c,i,j,T,count,r,d,sum;

    scanf("%d",&T);
    while(T--)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        for(i=0;i<=b;i++)
        {
       sum=sum+power(a,i);
        }
        printf("Result = %d\n",sum);
    }

    return 0;
}
