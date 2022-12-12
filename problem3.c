#include"stdio.h"
void solv(int i,int n)
{
    printf("%d ",i);
    if (i==n)return;
    solv(i+1,n);
}
int main()
{
    int n=10;
    int i=1;
    solv(i,n);
    return 0;
}
