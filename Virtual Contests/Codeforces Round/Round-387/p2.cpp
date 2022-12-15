/*
    ******** Virtual Contest *********
    Problem:            B. Mammoth's Genome Decoding
    Problem link:       https://codeforces.com/contest/747/problem/B
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
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n%4 != 0){
        cout<<"==="<<ee;
        return;
    }
    ll a=0,c=0,g=0,t=0,q=0;
    loop(i,0,n,1){
        if(s[i] == 'A') a++;
        else if(s[i] == 'C') c++;
        else if(s[i] == 'G') g++;
        else if(s[i] == 'T') t++;
        else q++;
    }
    ll _all = n/4;
    if(a > _all || c > _all || g > _all || t > _all){
        cout<<"==="<<ee;
        return;
    }
    a = _all; c = _all; g = _all; t = _all;
    loop(i,0,n,1){
        if(s[i] == 'A') a--;
        else if(s[i] == 'C') c--;
        else if(s[i] == 'G') g--;
        else if(s[i] == 'T') t--;
    }
    loop(i,0,n,1){
        if(s[i] == '?'){
            if(a > 0) {s[i] = 'A'; a--;}
            else if(c > 0) {s[i] = 'C'; c--;}
            else if(g > 0) {s[i] = 'G'; g--;}
            else if(t > 0) {s[i] = 'T'; t--;}
        }
    }
    cout<<s<<ee;
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
