#include<iostream>
using namespace std;

int sum1=0,sum2=0,sum3=0,max=0;

int maxSum(int n)
{
   //cout<<"n = "<<n<<" Sum1: "<<sum1<<endl;
   int dp[n+1];
   dp[0]=0;
   for(int i=1;i<=n;i++)
   {
      dp[i] = dp[int(i/2)]+dp[int(i/3)]+dp[int(i/4)];
      if(dp[i]<i)
       dp[i]=i;
   }
   return dp[n];

  /* sum1 = maxSum(int(n/2)) + maxSum(int(n/3)) + maxSum(int(n/4));
   if(sum1 > n)
     return sum1;
   return n;*/
}

int main()
{
  int n = 12;
  cout<<maxSum(n);
}
