// Add some code
#include <stdio.h>
#include <string.h>
int main()
{
     double a,b,i;
     int count;
    scanf("%lf",&a);
    for(i=0;i<a;i++)
    {
        count=0;
       scanf("%lf",&b);
       while(b>=1)
       {
           b=b/2;
           count ++;
       }
      printf("%d days\n",count);
    }

    return 0;
}
