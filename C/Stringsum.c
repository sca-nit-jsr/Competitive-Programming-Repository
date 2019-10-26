#include<stdio.h>
#include<string.h>
int main()
{  char s[10000];
int i,n,l,sum=0;
  scanf("%s",&s);
  l=strlen(s);
  for(i=0;i<l;i++)
  {
      sum=(int)sum+(s[i]-96);
  }
    printf("%d",sum);
    return 0;
}
