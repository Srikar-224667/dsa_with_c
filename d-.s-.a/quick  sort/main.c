/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int k(int a[],int ,int );
int par(int a[],int ,int );
int main()
{   int i,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i])    ;
    }
    a[i]=234556;
    k(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    return 0;
}
int k(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
    mid=par(a,low,high);
    k(a,low,mid-1);
    k(a,mid+1,high);
    }
}
int par(int a[],int low,int high)
{
    int i=low,j=high+1,temp,p=a[low];
    while(i<=j)
    {
        do{i++;}while(a[i]<p);
        do{j--;}while(a[j]>p);
        if(i<j)
        {
            temp=a[j],a[j]=a[i],a[i]=temp;
        }
    }
    temp=a[j],a[j]=a[low],a[low]=temp;
    return j;
}







