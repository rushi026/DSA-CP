/*
    Problem:            xyz
    Problem link:       xyz
    Contest:            Codeforces Round #724 (Div. 2)
    Date:               06/02/2021
    Last Updated:       06/02/2021
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
    cout<<"begin"<<ee;
    ll n, _min = INT32_MAX, _max = INT32_MIN;
    cin>>n;
    vll a(n), b;
    bool ans = true;
    loop(i,0,n,1){
        cin>>a[i];
        if(a[i] < 0) ans = false;
        // _min = min(_min, a[i]);
        // _max = max(_max, a[i]);
    }
    if(!ans){
        cout<<"NO"<<ee;
        return;
    }
    b = a;
    _sort(b);
    b[0] == 0 ? _min = b[1] : _min = b[0];
    _max = b[n-1];
    bool present;
    ll j = _min, k=2;
    while (true){
        present = false;
        for(ll i: a){
            if(i == j) {present = true; break;}
        }
        if(!present) a.pb(j);
        j *= k++;
        if(j > _max) break;
    }
    if(a.size() > 300) cout<<"NO"<<ee;
    else{
        cout<<"YES"<<ee<<a.size()<<ee;
        print(a); cout<<ee;
    }
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
