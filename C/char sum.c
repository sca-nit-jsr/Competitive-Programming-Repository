#include <stdio.h>
 
int main ()
{
   int c = 0,k[1000],a=0;
   char ch, s[1000];
    gets(s);
   while (s[c] != '\0') 
   {
      k[c]=s[c]-96;
      a=a+k[c];
	  c++;   
   } 
   printf("%d",a);
}
