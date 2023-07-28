#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    printf("sadas");
    int mat[3][3],trans[3][3] ,r,c,a[6],temp;
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&mat[r][c]);
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<r;c++){
                temp=mat[r][c];
            mat[r][c]=mat[c][r];
        mat[c][r]=temp;
        }
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d ",mat[r][c]);

}
printf("\n");
    }

  return 0;
}
