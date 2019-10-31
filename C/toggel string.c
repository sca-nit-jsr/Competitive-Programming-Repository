#include <stdio.h>
 
int main ()
{
   int c = 0;
   char S[100];
 
   //printf("Input a string\n");
   scanf("%s",&S);
   
   while (S[c] != '\0')
   {
      if (S[c] >= 'A' && S[c]<= 'Z')
         S[c] = S[c] + 32;
      else if (S[c] >= 'a' && S[c] <= 'z')
         S[c] = S[c] - 32;  
      c++; 
       
   }
   printf("%s",S);
    
     return 0;
}
