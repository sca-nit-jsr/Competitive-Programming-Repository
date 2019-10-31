/**########* 
  **######**
  ***####***
  ****##****
  ********** */
#include<stdio.h>
int main()
{
	int i,j,n,T,k;
	//int h=0;
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		 {
			if(j<=i||j>n*2-i)
			{
				printf("*");
			}
			else
			printf("#");
		 }
		 
		printf("\n");
	}
  }
}
	
