/*
    Problem:            D. Test of Love
    Problem link:       https://codeforces.com/contest/1992/problem/D
    Contest:            Codeforces Round 957 (Div. 3)
    Date:               11/07/2024
    Last Updated:       11/07/2024
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

ll pow(ll x, ll n) {
    ll res = 1;
    while(n){
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}


/***********************************/
void yes() {
    cout<<"YES"<<ee;
    return;
}
void no() {
    cout<<"NO"<<ee;
    return;
}
void debug(int i) {
    cout<<"NO"<<ee;
    return;
}
void solve() {
    ll n, m, k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    if(m > n) return yes();
    ll cur = 0;
    while(cur <= n) {
        if(cur == n+1) return yes();
        if(cur && s[cur-1] == 'C') return debug(1);
        if(cur && s[cur-1] == 'L' && cur + m > n) return yes();
        if(cur && s[cur-1] == 'W') {
            cur++;
            if(s[cur-1] == 'W') {
                k--;
                if(k < 0) {
                    return debug(2);
                }
            }
            continue;
        }
        bool flag = false;
        int firstW = -1;
        for(int j = cur + m; j > cur; j--) {
            if(s[j-1] == 'L') {
                cur = j;
                flag = true;
                break;
            }
            else if(s[j-1] == 'W' && firstW == -1) firstW = j; 
        }
        if(flag) continue;
        if(firstW != -1) {
            cur = firstW;
            k--;
            if(k < 0) return debug(3);
        }
        else return debug(4);
    }
    return yes();
}

/***********************************/
int main() {
    #ifndef ONLINE_JUDGE
        freopen("../../../input.txt", "r", stdin);
        freopen("../../../output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}