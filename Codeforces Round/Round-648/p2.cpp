/*
    Problem link: https://codeforces.com/contest/1365/problem/B
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
    ll a[n], b[n];
    ll i;
    loop(i,0,n)
    cin>>a[i];
    ll z=0, o=0;
    loop(i,0,n)
    {
        cin>>b[i];
        if(b[i])
            o++;
        else
            z++;
    }
    bool temp = true;
    loop(i,0,n-1)
    {
        if(a[i] > a[i+1])
        {
            temp = false;
            break;
        }
    }
    if(temp)
    {
        cout<<"Yes"<<endl;
        return;
    }
    temp = true;
    if(z==n || o==n)
    {
        loop(i,0,n-1)
        {
            if(a[i] > a[i+1])
            {
                temp = false;
                break;
            }
        }
        if(temp)
        {
            cout<<"Yes"<<endl;
            return;
        }
        else
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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
