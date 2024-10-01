#include <stdio.h>
void merge(int a[],int ,int );
void simple(int a[],int ,int ,int );
int main()
{
    int i,n,a[20];
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge(a,0,n-1);
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }

    return 0;
}
void merge(int a[],int low,int high)
{   
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge(a,low,mid);
        merge(a,mid+1,high);
        simple(a,low,mid,high);
    }
}
void simple(int a[],int low,int mid,int high)
{
    int i=low,j=mid+1,k=low,c[20],l;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k++,i++;
        }
        else
        {
           c[k]=a[j];
            k++,j++; 
        }
    }
    while(i<=mid)
    {
       c[k]=a[i];
            k++,i++; 
    }
    while(j<=high)
    {
        c[k]=a[j];
            k++,j++; 
    }
    for(l=low;l<=high;l++)
    {
        a[l]=c[l];
    }
    
    
    
}