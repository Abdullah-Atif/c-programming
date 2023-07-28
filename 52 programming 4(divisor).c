#include<string.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,j,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
    {
        printf("Case %d: ",i+1);
        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {
            if(b%j==0)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
	return 0;
}
