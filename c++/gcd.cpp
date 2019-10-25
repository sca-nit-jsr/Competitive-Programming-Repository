#include<bits/stdc++.h>
#define k 1000000007
using namespace std;


int gcd(int a,int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[],int n)
{
    int result,i;
    result = arr[0];
    for (i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

int main()
{
    long long int n,res,c=1,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    res=findGCD(arr,n);
    cout<<res<<endl;
    return 0;

}
