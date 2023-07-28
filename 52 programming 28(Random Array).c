// Add some code
#include <stdio.h>
#include <string.h>

int main()
{
     int a,b,c,d,e,i,n,j;
     int count,array[21];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
       scanf("%d",&b);
      int sorted=1;
      for(j=0;j<b;j++)
      {
          scanf("%d",&array[j]);
      }
      if(array[0]<array[1]){
      for(j=1;j<b;j++)
      {
          if(array[j]<array[j-1])
          {
              sorted=0;
              ///printf("|%d|",j);
              break;
          }
      }
      if(sorted==1)
      {
          printf("YES\n");
      }
      else if(sorted==0)
      {
          printf("NO\n");
      }
    }
    if(array[0]>array[1]){
      for(j=1;j<b;j++)
      {
          if(array[j]>array[j-1])
          {
              sorted=0;
              ///printf("|%d|",j);
              break;
          }
      }
      if(sorted==1)
      {
          printf("YES\n");
      }
      else if(sorted==0)
      {
          printf("NO\n");
      }
    }
    }

    return 0;
}
