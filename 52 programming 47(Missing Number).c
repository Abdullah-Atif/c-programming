#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ara[100001];
    int i,N,j,t,num,missing;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        ara[i]=0;
    for(i=0;i<N-1;i++)
    {
        scanf("%d",&num);
        ara[num]=1;
    }
    for(i=1;i<=N;i++)
    {
        if(ara[i]==0)
        {
            missing=i;
            break;
        }
    }
    printf("Missing number: %d\n",missing);
}
      return 0;
}
