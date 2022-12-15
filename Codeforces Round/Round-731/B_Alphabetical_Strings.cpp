/*
    Problem:            B. Alphabetical Strings
    Problem link:       https://codeforces.com/contest/1547/problem/B
    Contest:            Codeforces Round #731 (Div. 3)
    Date:               14/07/2021
    Last Updated:       14/07/2021
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
#define sll                set<ll>
#define pll               pair<ll, ll>
#define mll                map<ll, ll>

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
    ll i,j,l=-1,r=-1;
    string s;
    cin>>s;
    if(s == "a"){
        cout<<"YES"<<ee;
        return;
    }

    j = s.length();
    loop(i,0,j,1){ 
        if(s[i] == 'a'){
            l = r = i;
            break;
        }
    }
    if(l == -1){
        cout<<"NO"<<ee; return;
    }
    
    char c = 'a';
    ll n = j;
    j--;
    while(j--){
        c++;
        if(l-1>=0 && s[l-1] == c) l--;
        else if(r+1 < n && s[r+1] == c) r++;
        else{
            cout<<"NO"<<ee;
            return;
        }
    }
    cout<<"YES"<<ee;
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
