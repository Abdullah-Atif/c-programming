#include <stdio.h>
#include <string.h>

int main ()
{
    int a,b,c,i,j,T,count,r,d,temp;
    char str[10][100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&b);
           for (int i = 0; i < b ;i++)
           scanf("%s", str[i]);
          ///  scanf("%s",str);
       for(i=0;i<b;i++)
            for(j=i;j<b;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
        ///printf("|");
        for(i=0;i<b;i++)
            {
            printf("%s\n",str[i]);
            }
        }

    return 0;
}
