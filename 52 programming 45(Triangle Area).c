#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    float a,b,c,i,j,k,n,count,r,d,sum,area,s;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%f%f%f",&a,&b,&c);
        if(a+b>c && b+c>a && a+c>b)
          {
              s=(a+b+c)/2;
              area=sqrt(s*(s-a)*(s-b)*(s-c));

              printf("Area = %0.3f\n",area);
          }
    }
     return 0;
}
