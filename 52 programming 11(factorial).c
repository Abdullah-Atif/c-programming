#include<string.h>
#include<math.h>
#include <stdio.h>
int main()
{
	long long int a,i,c,b,d,e,f,j;

	scanf("%lld",&a);
	for(i=0;i<a;i++)
    {

       scanf("%lld",&b);
        ///if(0<=b&&b<=15){
       c=1;
       for(j=1;j<=b;j++)
       {
           c=c*j;
       }
        printf("%lld\n",c);
        }
    ///}
	return 0;
}
