/*
    Problem:            A. Domino on Windowsill
    Problem link:       https://codeforces.com/contest/1499/problem/A
    Contest:            Educational Codeforces Round 106
    Date:               18/03/2021
    Last Updated:       18/03/2021
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
    ll n,k1,k2,w,b;
    cin>>n>>k1>>k2>>w>>b;
    if(k1 > k2)
    {
        swap(k1,k2);
    }
    if((w <= k1) || ((w-k1) <= ((k2-k1)/2))){
        if(b <= n-k2 || (b-(n-k2) <= (k2-k1)/2))
        {
            cout<<"yes"<<endl;
            return;
        }
        else 
        {
            cout<<"no"<<endl;
            return;
        }
    }
    else
    {
        cout<<"no"<<endl;
        return;
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
