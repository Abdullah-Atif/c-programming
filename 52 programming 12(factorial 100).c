#include<string.h>
#include<math.h>
#include <stdio.h>
int main()
{
	int a,i,c,b,d,e,f,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
    {
       e=0;
       scanf("%d",&b);
       for(j=5;j<=b;j++)
       {
       c=j;
       while(c%5==0)
        {
           e++;
           c=c/5;
           ///printf("%d\n",e);
        }
       }
        printf("%d\n",e);

    }
	return 0;
}
