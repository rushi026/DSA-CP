

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll x,y,z;
    cin>>x>>y>>z;
    if(x == y && y == z)
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
        return;
    }
    if(x == y || y == z)
    {
        if(y==z)
        {
            if(x<y)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<1<<" "<<z<<endl;
                return;
            }
        }
        if(x == y)
        {
            if(z<x)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<1<<" "<<x<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
    }
    if(x == z)
    {
        ll a = x;
        ll b = y;
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<1<<endl;
        return;
    }
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
