#include <stdio.h>
int main ()
{
    int n,i,j,key,a[20],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\npasses for bubble sort");
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }printf("%d ",a[j]);
        }printf("\n");
    }
    
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    
    
    
    
    return 0;
}