/*
    Problem:            xyz
    Problem link:       xyz
    Contest:            xyz
    Date:               dd/mm/yyyy
    Last Updated:       dd/mm/yyyy
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
#define print(v)            for(auto i : v) cout<<i;
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    ll b[n];
    string tmp;
    cin>>tmp;
    ll i;
    loop(i,0,n,1)
        b[i]=((ll)tmp[i] - 48);
    ll a[n];
    if(b[0] == 0) {
        loop(i,0,n,1) {
            if(i%1)
                a[i] = 2;
            else 
                a[i] = 1;
        }
    } else {
        loop(i,0,n,1) {
            if(i%1)
                a[i] = 1;
            else 
                a[i] = 2;
        }
    }
    ll c[n];
    loop(i,0,n,1) {
        c[i] = a[i] - b[i];
        if(c[i] == 2) 
            c[i] = 0;
    }
    loop(i,0,n,1)
        cout<<c[i];
    cout<<endl;
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
