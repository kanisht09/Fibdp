#include <bits/stdc++.h>
#define ull unsigned ll
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define pi acos(-1)
#define nu 100
#define INF 100000000000
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)

#define tc int t;cin>>t;while(t--)
#define tcf ll t;cin>>t;for(int w=1;w<=t;w++)

const int mod = 1000000007;
using namespace std;

ll dp[100005];


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    dp[1] = 0;
    dp[2] = 1;
    F(i, 3, n + 1)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << "\n";

    return 0;

}

