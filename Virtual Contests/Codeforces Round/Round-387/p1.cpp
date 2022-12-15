/*
    ******** Virtual Contest *********
    Problem:            A. Display Size
    Problem link:       https://codeforces.com/contest/747/problem/A
    Contest:            Codeforces Round #387 (Div. 2)
    Date:               02/06/2021
    Last Updated:       02/06/2021
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
bool isSqure(ll n){
    ll temp = sqrt(n);
    return temp*temp == n;
}
void solve()
{
    ll n;
    cin>>n;
    if(isSqure(n)){
        cout<<sqrt(n)<<" "<<sqrt(n)<<ee;
        return;
    }
    ll a,b;
    rloop(i,sqrt(n)+1,1,1){
        if(n%i == 0){
            a = i;
            b = n/i;
            if(a>b) swap(a,b);
            cout<<a<<" "<<b<<ee;
            return;
        }
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
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
