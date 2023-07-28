#include <stdio.h>
#include <string.h>
int fact(int a)
{
    int c,j;
     c=1;
       for(j=1;j<=a;j++)
       {
           c=c*j;
       }
       return c;
}
int main()
{
    int i,j,a,b,c,d,count;
    char ch[2];
    char str[10000];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        count=0;
      /// scanf( " %[^'\n'] ",str);
      gets(str);
       scanf("%s",ch);
       printf("%c",ch);
       for(j=0;(str[j]!=' '&&str[j+1]!=' ')||(str[j]=='’');j++)
       {
           if(ch[0]==str[j])
            count++;
       }
       printf("Occurrence of '%c' in '%s' = %d\n",ch[0],str,count);
    }
    return 0;
}
