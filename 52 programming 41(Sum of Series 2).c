#include <stdio.h>
#include <string.h>
int factorial(int a)
{
    int i=1;
    for( ;a>=1;a--)
    {
        i=i*a;
    }
}

int main ()
{
    float a,b,c,i,j,T,count,r,d,sum;
    scanf("%f",&T);
    while(T--)
    {
        sum=0;
        scanf("%f",&a);
        for(i=1;i<=a;i++)
        {
            sum=sum+i/factorial(i);
        }
        printf("%f\n",sum);
    }

    return 0;
}
