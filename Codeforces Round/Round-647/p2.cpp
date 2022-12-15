/*
    Problem link: https://codeforces.com/contest/1362/problem/B
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

bool exist(ll ele, ll ar[], ll len)
{
    ll i;
    loop(i,0,len)
    {
        if(ele == ar[i])
            return true;
    }
    return false;
}


void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll i=0;
    loop(i,0,n)
    {
        cin>>a[i];
    }
    ll a2[n],j;
    loop(j,1,1025)
    {
        bool flag = true;
        loop(i,0,n)
        {
            a2[i] = a[i]^j;
            if(exist(a2[i], a, n))
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<j<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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

