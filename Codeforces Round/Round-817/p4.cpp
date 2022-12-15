/*
    Problem:            C. Word Game
    Problem link:       https://codeforces.com/contest/1722/problem/C
    Contest:            Codeforces Round #817 (Div. 4)
    Date:               30/08/2022
    Last Updated:       30/08/2022
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
    ll n;
    cin>>n;
    vector<vector<string>> v(3, vector<string>(n));
    map<string, int> m;
    for(int i=0; i<3; i++) {
        for(int j=0; j<n; j++) {
            cin>>v[i][j];
            m[v[i][j]]++;
        }
    }
    ll a=0, b=0, c=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<n; j++) {
            if(m[v[i][j]] == 1) {
                if(i==0) a+=3;
                else if(i==1) b+=3;
                else c+=3;
            }
            else if(m[v[i][j]] == 2) {
                if(i==0) {
                    a+=1;
                    bool flag = true;
                    for(int k=0; k<n; k++) {
                        if(v[1][k] == v[i][j]) {
                            b += 1;
                            flag = false;
                            break;
                        }
                    }
                    if(flag) c+=1; 
                }
                else if(i==1) {
                    b+=1;
                    bool flag = true;
                    for(int k=0; k<n; k++) {
                        if(v[0][k] == v[i][j]) {
                            a += 1;
                            flag = false;
                            break;
                        }
                    }
                    if(flag) c+=1; 
                }
                else {
                    c+=1;
                    bool flag = true;
                    for(int k=0; k<n; k++) {
                        if(v[0][k] == v[i][j]) {
                            a += 1;
                            flag = false;
                            break;
                        }
                    }
                    if(flag) b+=1; 
                }
            }
            m[v[i][j]] = 3;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<ee;
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
