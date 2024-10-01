/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[20],i,j,n,key,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        key=i;
        for(j=i+1;j<n;j++)
        {
            if(a[key]>a[j])
            {
                key=j;
            }
        }
        temp=a[key];
        a[key]=a[i];
        a[i]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
