/*
    Problem:            B. Sifid and Strange Subsequences
    Problem link:       http://codeforces.com/contest/1529/problem/B
    Contest:            Codeforces Round #722 (Div. 2)
    Date:               24/05/2021
    Last Updated:       28/05/2021
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
void solve(){
    ll n, i, c=0, zero=0, pos=0, posmin=INT_MAX;
    cin>>n;
    vll a(n);
    loop(i,0,n,1){
        cin>>a[i];
        if(a[i] < 0 ) c++;
        else if(a[i] == 0) zero++;
        else pos++;
        if(a[i] > 0 && a[i] < posmin) posmin = a[i];
    }

    if(c == 0 && zero ==0){
        cout<<1<<ee;
        return;
    }

    bool tt = true;
    loop(i,0,n,1){
        if(a[i] > posmin) del(a,i);
        if(tt && a[i] == posmin) tt = false;
        else del(a,i);
    }

    if(zero > 1){
        cout<<c+zero<<ee;
        return;
    }    

    ll k = a.size();
    loop(i,0,k,1){
        cout<<a[i]<<" ";
    }
    cout<<ee;
    return;
    bool temp = true;
    _sort(a);
    loop(i,1,k,1){
        if(abs(a[i] - a[i-1]) < posmin){
            temp = false;
            break;
        }
    }
    if(temp){
        cout<<c+zero+1<<ee;
    }
    else{
        cout<<c+zero<<ee;
    }
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    // speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
