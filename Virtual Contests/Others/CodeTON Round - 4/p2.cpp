/*
    # Virtual Contest 
    Problem:            B. Candies
    Problem link:       https://codeforces.com/contest/1810/problem/B
    Contest:            CodeTON Round 4 (Div. 1 + Div. 2, Rated, Prizes!)
    Date:               03/04/2023
    Last Updated:       03/04/2023
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
    ll n, i=0;
    cin>>n;
    if(!(n&1)) {
        cout<<-1<<ee;
        return;
    }
    vector<short> v(ceil(log2(n)));
    while(n) {
        v[i++] = (n%2)+1;
        n /= 2;
    }
    cout<<v.size()-1<<ee;
    rloop(j,v.size()-1,1,1) cout<<v[j]<<" ";
    cout<<ee;
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