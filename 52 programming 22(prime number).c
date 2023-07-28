#include <stdio.h>
#include <string.h>
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
       if(a%i==0)
       {
           return 0;
       }
    }
    return 1;
}
int main()
{
    char str[1000];
    int count,a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        count=0;
        scanf("%d %d",&b,&c);
        for(j=b;j<=c;j++)
        {
            if(prime(j))
            {
               /// printf("%d\n",j);
                count ++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
