#include<stdio.h>
int main()
{
    int a[30],i,n,j,t;
    printf("enter number of elments ");
    scanf("%d",&n);
    printf("enter numbers is  array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }       
    }
    printf(" descending order ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}
