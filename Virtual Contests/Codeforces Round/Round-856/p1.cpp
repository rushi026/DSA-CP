/*
    # Virtual Contest 
    Problem:            A. Prefix and Suffix Array
    Problem link:       https://codeforces.com/contest/1794/problem/A
    Contest:            Codeforces Round 856 (Div. 2)
    Date:               08/03/2023
    Last Updated:       08/03/2023
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

string rev(string s) {
    int n = s.length();
    string k = "";
    while(n--) k += s[n];
    return k;
}

/***********************************/
void solve()
{
    ll n, k, i, j;
    cin>>n;
    k = (n-1)*2;
    string a = "", b = "", c = "", d = "";
    vector<string> v(k);
    loop(i,0,k,1) {
        cin>>v[i];
        if(v[i].length() == 1) {
            if(a == "") a = v[i];
            else b = v[i];
        }
        else if(v[i].length() == n-1) {
            if(c == "") c = v[i];
            else d = v[i];
        }
    }
    if(n == 2 && v[0] == v[1]) {
        cout<<"YES"<<ee;
        return;
    }
    if(n == 2 && v[0] != v[1]) {
        cout<<"NO"<<ee;
        return;
    }
    if(a == b && c == rev(d)) cout<<"YES"<<ee;
    else cout<<"NO"<<ee;
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
