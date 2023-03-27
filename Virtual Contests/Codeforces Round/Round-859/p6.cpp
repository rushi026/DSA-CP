/*
    # Virtual Contest 
    Problem:            F. Bouncy Ball
    Problem link:       https://codeforces.com/contest/1807/problem/F
    Contest:            Codeforces Round 859 (Div. 4)
    Date:               23/03/2023
    Last Updated:       23/03/2023
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
#define pll                 pair<ll, ll>

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
    ll n,m, i1,j1, i2,j2, i,j, c=0;
    string dir;
    cin>>n>>m>>i1>>j1>>i2>>j2>>dir;
    i = i1; j = j1;
    bool flag = false;
    while(true) {
        if(i == i2 && i == j2) {
            cout<<c<<ee;
            return;
        }

        if(i == n) {
            dir[0] = 'U';
            if(flag) c++;
            continue;
        }
        if(i == 1) {
            dir[0] = 'D';
            if(flag) c++;
            continue;
        }
        if(j == m) {
            dir[1] = 'L';
            if(flag) c++;
            continue;
        }
        if(j == 1) {
            dir[1] = 'R';
            if(flag) c++;
            continue;
        }
        if(dir == "DR") {
            i++; j++;
        }
        if(dir == "DL") {
            i++; j--;
        }
        if(dir == "UR") {
            i--; j++;
        }
        if(dir == "UL") {
            i--; j--;
        }

        flag = true;
    }
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