#include<string.h>
#include<math.h>
#include <stdio.h>
int main()
{
	int a,i,b,c,d,ball_played;
	double cur_rr,ask_rr;
	scanf("%d",&a);
	for(i=0;i<a;i++)
    {
       scanf("%d %d %d",&b,&c,&d);
       ball_played = 300-d;
        cur_rr=(c*1.0/ball_played)*6.0;
        ask_rr=((b-c+1)*1.0/d)*6.0;

       printf("%0.2lf %0.2lf\n",cur_rr,ask_rr);
    }
	return 0;
}
