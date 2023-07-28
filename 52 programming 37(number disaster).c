#include <stdio.h>
#include <string.h>

int main ()
{
    long long int a,b,c,i,j,T,count,r,d,temp;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&b);
        c=0;
          while(b!=0)
          {
              c=c*10;
              c=c+b%10;
              b=b/10;
              ///printf("%d",c);
          }
          printf("%lld\n",c);
    }

    return 0;
}
