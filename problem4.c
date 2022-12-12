#include"stdio.h"
void solv(int x,int y)
{
    printf("%d ",y);
    if(y==x)return;
    solv(x,y-1);
}
int main()
{
    int n=5;
    int i=1;
    solv(i,n);
    return 0;
}
