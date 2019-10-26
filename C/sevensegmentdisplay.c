#include<stdio.h>
int main()
{   char n[100];
    int t,c=0,m,l;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {   m=0;
        scanf("%s",&n);
        l=strlen(n);
        for(int i=0;i<l;i++)
        {
            if(n[i]=='0' || n[i]=='6' ||n[i]=='9')
            m+=6;
            else if(n[i]=='1')
            m+=2;
            else if(n[i]=='7')
            m+=3;
            else if(n[i]=='4')
            m+=4;
            else if(n[i]=='8')
            m+=7;
            else
            m+=5;
        }
        if(m%2==0)
        {
            for(int k=0;k<m/2;k++)
            {printf("1");}
        }
        else
        {
           printf("7");
           m-=3;
           for(int k=0;k<m/2;k++)
           {printf("1");}
        }
        printf("\n");
    }
        return 0;
}
