/*
TASK 14
14a. Write a C program to traverse the graph in DFS order.

Test Case example:

case=t5
input= 5
0 1 0 1 0
1 0 0 0 0
1 0 0 1 1 
1 0 1 0 0 
0 0 1 0 0
1
output=
The DFS Traversal of Graph is :
1 - 2 - 4 - 3 - 5 - 


*/
#include <stdio.h>
int n,a[20][20],s[10];
void read()
{
    int i,j;
    for(i=0;i<n;i++){
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
}
void dfs(int u)
{
    int i;
    s[u]=1;
    printf("%d ",u);
    for(i=0;i<n;i++)
    {
        if(a[u][i]==1&&s[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
   int i,j,sou;
   scanf("%d",&n);
   read();
   for(sou=0;sou<n;sou++)
   {
       for(i=0;i<n;i++)
       {
           s[i]=0;
       }
       printf("node reachable from %d : ",sou);
       dfs(sou);
   }
    
    
    

    return 0;
}