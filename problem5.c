#include"stdio.h"
int  solv(int x)
{
    int s;

    if(x==0)return 0;
    s= solv(x-1);
    return s+x;
}
int main()
{
    int n=5;
    int sum= solv(n);
    printf("%d",sum);
    return 0;
}
