#include<stdio.h>

int main()

{
    int a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
            break;
        else
        {
            if(c>a && c>b)
            {
               if((a*a)+(b*b)==c*c)
                printf("right\n");
            else
                printf("wrong\n");
            }
            else if(a>b && a>c)
            {
               if((c*c)+(b*b)==a*a)
                printf("right\n");
            else
                printf("wrong\n");
            }
            else if(b>a && b>c)
            {
               if((a*a)+(c*c)==b*b)
                printf("right\n");
            else
                printf("wrong\n");
            }

        }
    }
    return 0;
}
