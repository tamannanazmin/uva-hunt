#include<stdio.h>

int main()
{
    int num[100],n,i,j,swap;
    printf("enter the number of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            for(j=i+1;j<n;j++)
        {

            if(num[i]>num[j])
            {
                swap=num[i];
                num[i]=num[j];
                num[j]=swap;
            }
        }
        printf("%d\n",num[i]);
        }
        else if(num[i]%2!=0){
             for(j=i+1;j<n;j++)
        {

            if(num[i]<num[j])
            {
                swap=num[i];
                num[i]=num[j];
                num[j]=swap;
            }
        }
        printf("%d\n",num[i]);
        }

//printf("%d\n",num[i]);
    }

}
