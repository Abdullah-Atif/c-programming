#include<string.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,j,i,c;
	scanf("%d",&j);
	for(i=0;i<j;i++)
    {
        scanf("%d",&b);
        a=b%10;
        while(b!=0)
        {
            c=b%10;
            b=b/10;
        }
        printf("Sum = %d\n",a+c);
    }
	return 0;
}

