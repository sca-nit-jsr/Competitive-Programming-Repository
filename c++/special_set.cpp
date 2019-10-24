#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
#define LCM(a, b) a *b / __gcd(a, b)
inline ll func(ll a, ll b, ll c, ll n) {
    ll lcm_ab = LCM(a, b), 
       lcm_bc = LCM(b, c), 
       lcm_ac = LCM(a, c),
       lcm_abc = LCM(lcm_ab, c);

    return n / a + n / b + n / c - n / lcm_ab - n / lcm_bc - n / lcm_ac +
           n / lcm_abc;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll inp[3], a, b, c, k;
        cin >> a >> b >> c >> k;

        ll i = 1;
        ll j = LONG_LONG_MAX;
        ll ans;
        while (true) {
            if (i + 1 == j) {
                ll ans1 = func(a, b, c, i);
                ll ans2 = func(a, b, c, j);
                if (ans1 == k) {
                    ans = i;
                } else if (ans2 == k) {
                    ans = j;
                } else {
                    cout << "this didn't work" << endl;
                }
                break;
            }
            ll mid = i + (j - i) / 2;
            ll num = func(a, b, c, mid);
            if (num > k) {
                j = mid;
            } else if (num < k) {
                i = mid;
            } else {
                if (mid % (a * b * c) == 0) {
                    ans = mid;
                    break;
                } else {
                    j = mid;
                }
            }
        }

        cout << ans << endl;
    }
}