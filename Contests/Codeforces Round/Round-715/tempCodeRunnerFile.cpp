/*
    Problem:            B. TMT Document
    Problem link:       https://codeforces.com/contest/1509/problem/B
    Contest:            Codeforces Round #715 (Div. 2)
    Date:               16/04/2021
    Last Updated:       17/04/2021
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
            res = (res*x) ;
        }
        x = (x*x) ;
        y = y>>1;
    }
    return res;
}


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    char s[n]; ll i, t=0, m=0;
    loop(i,0,n,1)
    {
        cin>>s[i];
        if(s[i] == 'T') t++;
        else m++;
    }
    if(s[i] != 'T' || s[n-1] != 'T')
    {
        cout<<"NO"<<ee; return;
    }
    if(t != m*2)
    {
        cout<<"NO"<<ee; return;
    }
    ll j = 0;
    loop(i,0,n,1)
    {
        if(s[i] == 'M')
        {
            if(s[j] == 'T') 
            {
                j++;
                while(s[j] == 'M') j++;
            }
            else {cout<<"NO"<<ee; return;}
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
