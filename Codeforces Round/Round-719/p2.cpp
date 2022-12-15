/*
    Problem:            B. Ordinary Numbers
    Problem link:       https://codeforces.com/contest/1520/problem/B
    Contest:            Codeforces Round #719 (Div. 3)
    Date:               05/05/2021
    Last Updated:       05/05/2021
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
// ****************************************

void solve()
{
    ll n;
    cin>>n;
    if(n<10){
        cout<<n<<ee;
        return;
    }
    string s = to_string(n);
    ll digit = s.length();
    ll max = power(10,digit-1);
    ll c = (9*(digit-1));
    c += ((n/max)-1);
    int temp = n/max;
    vector<char> v(digit, temp+48); 
    temp = v[0];
    bool b = true;
    for(auto i : v) if(i != temp) b = false;
    string ss(v.begin(), v.end());
    ll k = stoi(ss);
    if(n>=k) c++;
    cout<<c<<ee;
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
