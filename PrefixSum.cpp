/*

Given an array of N integers
Given Q queries
In each query given a range, L and R
Print the sum of array elements from L to R (inclusive) 

Constratints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L , R <= N

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int prefixSum[N];

int main()
{

    int n;
    cin >> n;

    // NOTE: Take input from 1 in prefix sum
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // Pre computing
    for (int i = 1; i <= n; i++)
        prefixSum[i] = prefixSum[i - 1] + a[i];

    int q;
    cin >> q;

    while (q--)
    {

        int l, r;
        cin >> l >> r;

        cout << prefixSum[r] - prefixSum[l - 1] << endl;
    }

    // Time complexity:
    // O(N) + O(Q) = O(10^5)
}
