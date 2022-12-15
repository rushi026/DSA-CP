/*
    Problem:            xyz
    Problem link:       xyz
    Contest:            Codeforces Round #702 (Div. 3)
    Date:               16/02/2021
    Last Updated:       16/02/2021
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n,i,p,q,temp;
    cin>>n;
    vll a(n);
    scan(a);
    ll c=0;
    loop(i,0,n-1,1)
    {
        p = max(a[i], a[i+1]);
        q = min(a[i], a[i+1]);
        if(p > q*2)
        {
            continue;
        }
        else
        {
            a[i+1] = 
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
