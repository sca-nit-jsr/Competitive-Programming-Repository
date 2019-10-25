#include<stdio.h>
int main()
{
    int i,j,n,a=0,b=0,no;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&no);
    if(i<=n/2)
    {
        for(j=0;no!=0;j++)
        {
        if(no/10==0)
        {
        if(i%2==0)
        b+=no%10;
        else
        a+=no%10;
    }
    no=no/10;
        }
    }
     else
     {
       if(i%2==0)
         b+=no%10;
        else
         a+=no%10;
     }
    }
     if(abs(a-b)%11==0||abs(a-b)==0)
     printf("OUI");
     else
     printf("NON");
return 0;
}
