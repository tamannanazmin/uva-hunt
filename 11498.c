#include<stdio.h>

int main()
{
    int n,i,k,x,y,m;
    for(i=1;;i++)
        {
            scanf("%d",&k);
            scanf("%d%d",&n,&m);
        for(i=1;i<=k;i++)
        {
            scanf("%d%d",&x,&y);
            if(x==0 && y==0)
                printf("divisa\n");
            else if(0<=x && 0<=y)
                printf("NE\n");
            else if(0>=x && 0<=y)
                printf("NO\n");
            else if(0<=x && 0>=y)
                printf("SE\n");
            else if(0>=x && 0>=y)
                printf("SO\n");
        }
        if(k==0)
            break;
    }
    return 0;
}
