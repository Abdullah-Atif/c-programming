#include<string.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,c,d,i;
	char arr[101];
	scanf("%d",&a);
	for(i=0;i<a;i++)
    {
        scanf("%s",arr);
        b=strlen(arr);
        c=arr[b-1]-48;
        if(c%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

    }
	return 0;
}
