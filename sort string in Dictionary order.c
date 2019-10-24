#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j;
char a[1000] [20],temp[20];
printf("Enter size of array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=1;i<n;i++)
for(j=0;j<n-1;j++)
if(strcmp(a[j],a[j+1])>0)
{
    strcpy(temp,a[j]);
    strcpy(a[j],a[j+1]);
    strcpy(a[j+1],temp);
}
printf("Sorted stings are :\n ");
for(i=0;i<n;i++)
printf("%s\n",a[i]);
}
