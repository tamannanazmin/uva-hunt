#include<stdio.h>

int main()
{
    int i,j,k,t,tmp,size,n,p,temp=0;
    int a[100000];

    printf("Enter array size: ");
    scanf("%d",&size);

    printf("Elements:\n");
    for(j=1; j<=size; j++)
    {
        scanf("%d",&a[j]);
    }
    printf("Enter index number: ");
    scanf("%d",&p);



    k=n;
    while(k!=0)
    {
        t=0;
        for(j=1; j<=p; j++)
        {
            if(a[j]>a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                t=j;
            }
        }
        for(j=p+1; j<=size; j++)
        {
            if(a[j]<a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;

                t=j;
            }
        }
        k=t;

    }
    printf("\n");
    for(j=1; j<=size; j++)
    {
        printf(" %d",a[j]);
    }

    printf("\n\nEnter a number to search:");
    scanf("%d",&n);

    for(i=0; i<size; i++)
    {

        if(a[i]==n)
        {
            if(i<p)
                printf("\nFound in first portion and index is: %d\n",i);
            else if(i>=p)
                printf("\nFound in second portion and index is: %d\n",i);
               temp=1;
        }
    }

    if(temp==0)
        printf("not found");
    return 0;
}
