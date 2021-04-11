#include<stdio.h>


int main()
{

    int num[100],t,n,k,swap=0,i,j;
    printf("enter numbers to sort: ");
    scanf("%d",&n);
    printf("enter %d numbers: ",n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&num[j]);
    }
    k=n;
    while(k!=0)
    {
        t=0;
        for(j=1;j<=n;j++)
        {
            if(num[j]>num[j+1])
            {
                swap=num[j];
                num[j]=num[j+1];
                num[j+1]=swap;
                t=j;
            }
        }
        k=t;
       }
       printf("\n");
    for(j=1; j<=n; j++)
    {
        printf("%d\n",num[j]);
    }
}
