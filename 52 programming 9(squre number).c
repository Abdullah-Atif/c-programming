#include<string.h>
#include<math.h>
#include <stdio.h>
int main()
{
	int a,b,j,i,k,c,d;
	scanf("%d",&b);
	for(i=0;i<b;i++)
    {
       scanf("%d",&a);
       double sq_root =sqrt(a);
       if(ceil(sq_root)==floor(sq_root))
       {
           printf("Yes\n");
       }
       else
        printf("No\n");
    }
	return 0;
}
