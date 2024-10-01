#include <stdio.h>

int main()
{
int i,j,a[20],n,min,temp,item;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

   for(i=0;i<n;i++)
   {
       item=a[i];
       j=i-1;
       while(j>=0&&item<a[j])
       {
            a[j+1]=a[j];
            j=j-1;
       }    
        a[j+1]=item;
   }

printf("after sorting");
  for(i=0;i<n;i++)
    {
       printf("%d ",a[i]); 
    }

    return 0;
}
