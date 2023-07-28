// Add some code
#include <stdio.h>
#include <string.h>

int main ()
{
    int arr[]={6,28,496,8128,33550336};
    int a,b,c,i,j,T,count;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&a);
            count=0;
            for(j=0;j<5;j++)
            {
            if(a==arr[j])
            {
                count++;
            }

        }
        if(count==1)
        {
            printf("YES, %d is a perfect number!\n",a);
        }
        else{
          printf("NO, %d is not a perfect number!\n",a);
        }

    }
    return 0;
}
