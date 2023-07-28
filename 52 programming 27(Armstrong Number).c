// Add some code
#include <stdio.h>
#include <string.h>
int pow_3(int a)
{
    return a*a*a;
}

int main()
{
     int a,b,c,d,e,i;
     int count;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       scanf("%d",&b);
       c=b;
       e=0;
       while(c!=0)
      {
           e=e+pow_3(c%10);
           c=c/10;
       }
       if(b==e){
        printf("n is an armstrong number!");
       }
       else{
        printf("n is not an armstrong number!");
       }
    }

    return 0;
}
