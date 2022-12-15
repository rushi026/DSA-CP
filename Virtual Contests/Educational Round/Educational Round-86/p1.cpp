/*
    Problem link: https://codeforces.com/contest/1342/problem/A
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
    ll x,y,a,b, ans=0;
    cin>>x>>y>>a>>b;
    if(x<0)
        x = x - (2*x);
    if(y<0)
        y = y - (2*y);
    if(b > 2*a)
    {
        x=(x+y);
        ans = x*a;
        cout<<ans<<endl;
        return;
    }
    else
    {
        if(x>=y)
        {
            x-=y;
            ans += y*b;
            ans += x*a;
            cout<<ans<<endl;
            return;
        }
        else
        {
            y-=x;
            ans += x*b;
            ans += y*a;
            cout<<ans<<endl;
            return;
        }
    }
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

