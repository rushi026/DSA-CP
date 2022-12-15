/*
    Problem link:   https://codeforces.com/contest/1367/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll              long long int
#define ull             unsigned long long int
#define loop(i,x,y)     for(ll i=x; i<y; i++)
#define rloop(i,x,y)    for(ll i=x; i>=y; i--)
#define endl            '\n'
#define speedy          ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll i,j=0, o=0, e=0;
    loop(i,0,n)
    {
        cin>>a[i];
        if(i&1)
        {
            if(a[i]&1)
                continue;
            else
            {
                e++;
                j++;
            }
        }
        else
        {
            if(a[i]%2 == 0)
                continue;
            else
            {
                o++;
                j++;
            }
        }
    }
    if(j == 0)
        cout<<0<<endl;
    else
    {
        if(e==o)
            cout<<e<<endl;
        else
            cout<<-1<<endl;
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

