/*
    # Virtual Contest 
    Problem:            D. Odd Queries
    Problem link:       https://codeforces.com/contest/1807/problem/D
    Contest:            Codeforces Round 859 (Div. 4)
    Date:               21/03/2023
    Last Updated:       21/03/2023
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define ee                  '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)  

/**********************************/

ll power(ll x, ll y, ll p = 1e9+7) 
{ 
    ll res = 1;
    x = x ;
    while(y>0) 
    { 
        if(y&1) {
            res = (res*x);
        }
        x = (x*x);
        y = y>>1;
    }
    return res;
}


/***********************************/
void solve()
{
    ll n, k;
    cin>>n>>k;
    vll v(n), prefix(n, 0);
    vector<vll> q(k, vll (3));
    loop(i,0,n,1) {
        cin>>v[i];
        if(i==0) prefix[i] = v[i];
        else prefix[i] = prefix[i-1] + v[i];
    }
    loop(i,0,k,1) {
        loop(j,0,3,1) cin>>q[i][j];
        ll c = (q[i][1] - q[i][0] + 1) * q[i][2];
        if(q[i][0] > 1) c += prefix[q[i][0]-2];
        c += prefix[n-1] - prefix[q[i][1]-1];
        if(c&1) cout<<"YES"<<ee;
        else cout<<"NO"<<ee;
    }

}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt", "r", stdin);
        freopen("../../../output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
