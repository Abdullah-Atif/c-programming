// Add some code
#include <stdio.h>
#include <string.h>
int perfect_number(int a)
{
    int i,b;
    b=0;
     for(i=1;i<a;i++)
            if(a%i==0)
        {
            b=b+i;
        }
        if(a==b)
        {

            return 1;
        }
        return 0;
}
int main ()
{

    long long int a,b,c,i,j,T;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&a);
        for(i=1;i<=a;i++)
        {
            if(perfect_number(i)==1)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");


    }
    return 0;
}
