#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX 20
int fun(char sym,int op1,int op2)
{
    switch(sym)
    {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        case '^': return op1 ^ op2;
        default: return 0;
    }
}

int main ()
{
    int s[100],top=-1,n,op1,op2,item,i;
    float res;
    char post[20],sm;
    scanf("%s",post);
    n=strlen(post);
    for(i=0;i<n;i++)
    {
        sm=post[i];
        if(isdigit(sm))
        {
            s[++top]=sm-'0';
        }
        else if (isalpha(sm))
        {
            scanf("%d",&item);
            s[++top]=item;
        }
        else
        {
            if(top<0)
            {
                printf("Insufficient POSTFIX Expression\n");
                return 1;
            }
            else
            {
                op2=s[top--];
                op1=s[top--];
                s[++top]=fun(sm,op1,op2);
            }
        }
    }
    if(top!=0)
    {
        printf("Stack Underflow - missing operands / insufficient postfix exp\n");
        
    }
    else
    {
        res=s[top--];
        printf("The result is : %.2f",res);
    }
    return 0;
}




