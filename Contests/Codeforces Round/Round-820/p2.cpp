/*
    Problem:            B. Decode String
    Problem link:       https://codeforces.com/contests/1729/problem/B
    Contest:            Codeforces Round #820 (Div. 3)
    Date:               12/09/2022
    Last Updated:       12/09/2022
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(i=x; i>=y; i-=z)
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
#define sll                	set<ll>
#define pll               	pair<ll, ll>
#define mll                	map<ll, ll>

/**********************************/

ll fun(ll x, ll n){
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

/***********************************/
void solve()
{
    ll n, i;
    cin>>n;
    string s, ans="";
    cin>>s;
    rloop(i,n-1,0,1) {
        string k = "";
        if(s[i] == '0') {
            k += s[i-2];
            k += s[i-1];
            // cout<<k<<" ";
            ans += stoi(k) + 96;
            i -= 2;
        }
        else {
            k += s[i];
            ans += stoi(k) + 96;
        }
    }
    for (int i = ans.length() - 1; i >= 0; i--)
        cout << ans[i];
    cout<<ee;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("H:/Programming/DSA-CP/Codeforces/input.txt", "r", stdin);
        freopen("H:/Programming/DSA-CP/Codeforces/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
