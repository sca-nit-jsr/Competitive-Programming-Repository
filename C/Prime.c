#include <stdio.h>
int main()
{
	int num,n;
	scanf("%d", &num);         
	for(int i=1;i<=num;i++)
	{  n=0;
	    for(int j=1;j<=i;j++)
	    {
	        if(i%j==0)
	        {
	          n=n+1;  
	        }
          }
           if(n==2)
	       printf("%d ",i);
	        
	     }
	     return 0;
    }
