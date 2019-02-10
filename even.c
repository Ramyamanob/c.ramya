# c.ramya
#include<stdio.h>
int main()
{
    int N,Q;
    scanf("%d%d",&N,&Q);
    for(int i=N;i<Q;i++)
    {
        if(i>N)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    }
    return 0;
}
