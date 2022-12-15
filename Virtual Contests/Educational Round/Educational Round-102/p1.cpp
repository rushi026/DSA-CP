/*
    Problem:            A. Replacing Elements
    Problem link:       https://codeforces.com/contest/1473/problem/A
    Contest:            Educational Codeforces Round 102
    Date:               27/01/2021
    Last Updated:       27/01/2021
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
    ll n, d;
    cin>>n>>d;
    vll a(n);
    scan(a);
    ll i; bool c = false;
    loop(i,0,n,1)
    {
        if(a[i] <= d)
            continue;
        else
        {
            c = true;
            break;
        }
    }
    if(c)
    {
        _sort(a);
        if(a[0] + a[1] <= d)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    else 
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
