/*
    Problem:            A. Cards for Friends
    Problem link:       https://codeforces.com/contest/1472/problem/A
    Contest:            Codeforces Round #693 (Div. 3)
    Date:               07/01/2021
    Last Updated:       07/01/2020
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
    ll w,h,n;
    cin>>w>>h>>n;
    if(n == 1) {
        cout<<"YES"<<endl;
        return;
    }
    ll ans=0;
    if(!(w&1) || !(h&1))
        ans = 1;
    while(true) {
        if(!(w&1) || !(h&1)) {
            if(!(w&1)) {
                w /= 2;
            } else {
                h /= 2;
            }
            ans *= 2;
            if(ans >= n) {
                cout<<"YES"<<endl;
                return;
            }
        }
        else if(ans >= n) {
                cout<<"YES"<<endl;
                return;
        }
        else {
            cout<<"NO"<<endl;
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
