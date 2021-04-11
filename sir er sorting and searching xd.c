
#include<stdio.h>

int main()
{
    int a[10]= {3,2,6,4,7,9,1,11,7,5},i,k=4,n=10,temp,t,num;

    while(k!=0)
    {
        t=0;

        for( i=0; i<5; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                t=i;
            }
        }
        k=t;
    }

    k=4;
    while(k!=0)
    {
        t=0;

        for( i=5; i<10; i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                t=i;
            }
        }
        k=t;
    }

    printf("which number do you want to search?\n");
    scanf("%d",&num);
temp=0;
    for(i=0; i<10; i++)
    {

        if(a[i]==num)
        {
            if(i<5)
                printf(" first half and index no is: %d\n",i);
            else if(i>=5)
                printf(" second half and index no is: %d\n",i);
               temp=1;

        }

    }

    if(temp==0)
        printf("not found");



    return 0;
}

