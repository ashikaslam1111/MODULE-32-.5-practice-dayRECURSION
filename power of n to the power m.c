#include"stdio.h"
int power(int base,int p)
{
    if (p==0)return 1;
    int s=base*(power(base,p-1));
    return s;
}
int main()
{
    int n=2;
    int m=5;
    int result=power(n,m);
    printf("%d",result);
    return 0;
}
