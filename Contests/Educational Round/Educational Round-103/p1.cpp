/*  *** A1 ***
    Problem:            A. K-divisible Sum
    Problem link:       https://codeforces.com/contest/1476/problem/A
    Contest:            Educational Codeforces Round 103
    Date:               29/01/2021
    Last Updated:       03/02/2021
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
    ll n,k;
    cin>>n>>k;
    if(k == 1)
    {
        cout<<1<<endl;
        return;
    }
    if(k%n == 0)
    {
        cout<<k/n<<endl;
        return;
    }
    if(n%k == 0)
    {
        cout<<1<<endl;
        return;
    }
    if(n < k)
    {
        cout<<(k/n) + (1)<<endl;
        return;
    }
    cout<<2<<endl;
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
