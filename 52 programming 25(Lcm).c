// Add some code
#include <stdio.h>
#include <string.h>
int main()
{
    long long int arr[100],a,b,c,d,e,i,j,f,g;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
       scanf("%lld %lld",&b,&c);
       d=(b<c)?b:c;
       e=(b>c)?b:c;
       b=d;
       c=e;
       while(e%d!=0)
       {
         j=d;
         d=e%d;
         e=j;
       }
       printf("%lld\n",b*c/d);
    }
    return 0;
}
