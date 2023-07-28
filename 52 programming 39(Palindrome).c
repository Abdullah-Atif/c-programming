#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,T,count,r,d,temp;
    char str1[1000],str2[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",str1);
        count=0;
        a=strlen(str1);
        for(i=0,j=a-1;i<a,j>=0;i++,j--)
        {
            str1[i]=str2[j];
        }
        for(i=0;i<a;i++)
        {
            if(str1[i]==str2[i])
                count++;
        }
        if(count==a)
        {
            printf("Yes! It is palindrome!\n");
        }
        else{
            printf("Sorry! It is not palindrome!\n");
        }


    }

    return 0;
}
