/*
    Problem link: https://codeforces.com/contest/1359/problem/A
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
    ll n,m,k;
    cin>>n>>m>>k;
    if(n/k >= m)
    {
        cout<<m<<endl;
        return;
    }
    ll e = n/k;
    ll ans = e;
    ll temp = m - e;
    while(temp>0)
    {
        if(temp > (k-1))
        {
            temp -= (k-1);
            ans--;
        }
        else
        {
            ans--;
            break;
        }
    }
    cout<<ans<<endl;
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

