/*
    Problem link: https://codeforces.com/contest/1324/problem/A
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
    ll n;
    cin>>n;
    ll a[n];
    ll i;

    loop(i,0,n)
        cin>>a[i];

    if(a[0]&1)
    {
        loop(i,1,n)
        {
            if(!(a[i]&1))
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    else
    {
        loop(i,1,n)
        {
            if(a[i]&1)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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

