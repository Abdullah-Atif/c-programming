#include<string.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,j,i,k;
	scanf("%d",&a);
	for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {
           for(k=1;k<=b;k++)
           {
              printf("*");
           }
           printf("\n");
        }
        printf("\n");
    }
	return 0;
}
