#include <stdio.h>
int main(){
int n,i;
long int m=1,t=0;
scanf("%d", &n);
for(i=1;i<=n;i++){
scanf("%d",&t);
m=((m*t)%1000000007);
}
printf("%lld", m);
}
