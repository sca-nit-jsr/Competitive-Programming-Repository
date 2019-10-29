#include<stdio.h>
int main()
{
    long n,i;
    scanf("%ld",&n);
    long long int a[100005]={0},sa=0,sb=0,sc=0;
    for(i=0;i<n;i++)
    {
      scanf("%lld ",&a[i]);
      
    }
    i=0;
    while(a[i]!='\0')
    {
        sa+=a[i];
        sb+=a[i+1];
        sc+=a[i+2];
        i+=3;
    }
    printf("%lld %lld %lld",sa,sb,sc);
    return 0;
}
