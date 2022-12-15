/*
    Problem link: https://codeforces.com/contest/1294/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll              long long int
#define ull             unsigned long long int
#define loop(i,x,y)     for(ll i=x; i<y; i++)
#define rloop(i,x,y)    for(ll i=y; i>=x; i--)
#define endl            '\n'
#define speedy          ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll a,b,c,n;
    cin>>a>>b>>c>>n;
    ll m = max({a,b,c});
    n -= (m-a);
    n -= (m-b);
    n -= (m-c);
    if((n%3 == 0) && (n>=0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
