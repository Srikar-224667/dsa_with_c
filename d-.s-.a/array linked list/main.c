/* 
LAB TASK 13
QUESTION: 13 B- Write a C program to implement Adjacency List of a given graph.
Test Cases:
case = t1
input = 
4
1
4
0 1 1 0
4
0 0 0 0
4
0 0 0 1
4
0 1 0 0
2
3

output = 

Adjacency Linked List elements are:
a[0]=0-->1-->1-->0
a[1]=0-->0-->0-->0
a[2]=0-->0-->0-->1
a[3]=0-->1-->0-->0
*/
#include <stdio.h>
#include <stdlib.h>
int n;
struct node
{
    int info;
    struct node *link;
};

typedef struct node* node;

node insert(node first,int m)
{
    node temp,cur;
    temp=(node)malloc(sizeof(struct node));
    temp->info=m;
    temp->link=NULL;
    if(first==NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}

void dis(node a[])
{
    int i;
    node cur;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        cur=a[i];
        while(cur->link!=NULL)
        {
            printf("%d->",cur->info);
            cur=cur->link;
        }printf("%d\n",cur->info);
    }
}

int main()
{
    int i,m,v,j,k;
    node a[10]={NULL};
    scanf("%d",&n);
    
    while(1)
    {   scanf("%d",&k);
        switch(k){
        
    
    
    case 1:
    for(i=0;i<n;i++)
    {
        scanf("%d",&v);
        for(j=0;j<v;j++)
        {
            scanf("%d",&m);
            a[i]=insert(a[i],m);
        }
    }
    break;
    case 2:dis(a);
    break;
    case 3:exit(0);
    }}
    
}


