#include <stdio.h>
int findmax(int a[],int n)
{
    int i,j,max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

void sort(int a[],int pos,int n)
{
    int count[10]={0},output[n],i;
    for(i=0;i<n;i++)
    {
        count[(a[i]/pos)%10]++;
    }
    for(i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        output[--count[(a[i]/pos)%10]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=output[i];
    }
}

int main()
{
    int a[20],n,max,pos,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=findmax(a,n);
    for(pos=1;max/pos>0;pos=pos*10)
    {
        sort(a,pos,n);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}