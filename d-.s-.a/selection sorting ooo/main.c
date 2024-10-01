#include <stdio.h>

int main()
{
int i,j,a[20],n,min,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

   for(i=0;i<n-2;i++)
   {
       min=a[i];
       for(j=i+1;j<n-1;j++)
       {
            if(a[min]>a[j])
            {   
                min=j ; 
            }
            
       }    
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            
       
   }


  for(i=0;i<n;i++)
    {
       printf("%d ",a[i]); 
    }

    return 0;
}

