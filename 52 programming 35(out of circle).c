
#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
    int a,b,c,j,T,count,d;
    float i,r;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %f",&a,&b,&r);
        scanf("%d %d",&c,&d);
        i=sqrt((c-a)*(c-a)+(d-b)*(d-b));
        printf("%f",i);
        if(i<=r)
        {
            printf("The point is inside the circle\n");
        }
        else
        {
            printf("The point is not inside the circle\n");
        }
    }

    return 0;
}
