#include"stdio.h"
int power(int ar[],int n)
{
    int s;
    s=ar[n]%10;
    if (n<0)return 0;
    s=s+power(ar,n-1);
    return s;
}
int main()
{
    int n=4;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int result=power(ar,n);
    printf("%d",result);
    return 0;
}
