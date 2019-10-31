#include<stdio.h>
int main()
    {
        int n,i,sum=1,b=0,c;
        char a[10];
         scanf("%s",&a[i]);
    for(i=0;i<10;i++)
		{
			c=sum*(a[i]-48);
			b=b+c;
			sum++;
		}
		if(b%11==0)
		   printf("Legal ISBN");
		else
		   printf("Illegal ISBN");  
   }
