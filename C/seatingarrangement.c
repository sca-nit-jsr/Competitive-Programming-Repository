#include<stdio.h>

int main()
{
    int n,a,t,b,s,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d",&n);
    a=n/12,b=n%12;
    if(b!=0)
    a++;
    s=13+(a-1)*24;
    k=n%6;
    if(k==1||k==0)
    printf("%d WS\n",(s-n));
    if(k==2||k==5)
    printf("%d MS\n",(s-n));
    if(k==3||k==4)
    printf("%d AS\n",(s-n));
    }
    
}
