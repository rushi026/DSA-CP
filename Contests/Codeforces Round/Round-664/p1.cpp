/*
    Problem:            A. Another One Bites The Dust
    Problem link:       https://codeforces.com/contest/1148/problem/A
    Contest:            Codeforces Global Round 3
    Date:               19/08/2020
    Last Updated:       19/08/2020
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
    ull a,b,c,ans=0;
    cin>>a>>b>>c;
    if(a==b)
    {
        ans += (a*2);
        ans += (c*2);
    }

    else
    {
        ans += (c*2);
        ans += ((min(a,b)*2)+1);
    }
    cout<<ans<<endl;
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
