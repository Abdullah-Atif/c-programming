#include<string.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,j,i,k,c,d;
	scanf("%d",&a);
	for(i=0;i<a;i++)
    {
        printf("Case %d: ",i+1);
        scanf("%d %d %d",&b,&c,&d);
        if(b<c&&b<d&&c<d){
            printf("%d %d %d",b,c,d);
        }
        if(b<c&&b<d&&d<c){
            printf("%d %d %d",b,d,c);
        }
        if(c<b&&c<d&&b<d){
            printf("%d %d %d",c,b,d);
        }
        if(c<b&&c<d&&d<b){
            printf("%d %d %d",c,d,b);
        }
        if(d<c&&d<b&&c<b){
            printf("%d %d %d",d,c,b);
        }
        if(d<c&&d<b&&b<c){
            printf("%d %d %d",d,b,c);
        }
        printf("\n");
    }
	return 0;
}
