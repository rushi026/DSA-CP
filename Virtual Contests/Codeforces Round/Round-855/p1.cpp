/*
    # Virtual Contest 
    Problem:            A. Is It a Cat?
    Problem link:       https://codeforces.com/contest/1800/problem/A
    Contest:            Codeforces Round 855 (Div. 3)
    Date:               04/03/2023
    Last Updated:       04/03/2023
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
    if(s.length() < 4) {
        cout<<"NO"<<ee;
        return;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i=0;
    if(s[i] != 'm') {
        cout<<"NO"<<ee;
        return;
    }
    while(i<s.length() && s[i] == 'm') i++;
    if(i >= s.length() || s[i] != 'e') {
        cout<<"NO"<<ee;
        return;
    }
    while(i<s.length() && s[i] == 'e') i++;
    if(i >= s.length() || s[i] != 'o') {
        cout<<"NO"<<ee;
        return;
    }
    while(i<s.length() && s[i] == 'o') i++;
    if(i >= s.length() || s[i] != 'w') {
        cout<<"NO"<<ee;
        return;
    }
    while(i<s.length() && s[i] == 'w') i++;
    if(i == s.length()) cout<<"YES"<<ee;
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
