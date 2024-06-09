/*
    Problem:            D. GCD-sequence
    Problem link:       https://codeforces.com/contest/1980/problem/D
    Contest:            Codeforces Round 950 (Div. 3)
    Date:               03/06/2024
    Last Updated:       03/06/2024
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

bool possible(vector<int> &a, int x, int y, int k) {
    vector<int> v = a;
    a[x] = k;
    a[y] = k;
    if(a.size() == 7) {
        cout<<ee<<ee;
        for(int i: a) cout<<i<<" ";
        cout<<ee<<ee;
    }
    for(int i = 1; i < v.size(); i++) if(v[i] < v[i-1]) return false;
    return true;
}

void solve() {
    int n;
    cin>>n;
    vector<int> v(n), a(n-1);
    cin>>v[0];
    for(int i = 1; i < n; i++) {
        cin>>v[i];
        a[i-1] = __gcd(v[i-1], v[i]);
    }

    for(int i: a) cout<<i<<" ";
    cout<<ee;
    for(int i = 1; i < n-1; i++) {
        if(a[i] < a[i-1]) {
            if(i == n-2) {
                cout<<"YES"<<ee;
                return;
            }
            int temp = -1;
            if(i-1 >= 0 && i+1 < n) temp = __gcd(v[i-1], v[i+1]);
            if(temp > 0 && possible(a, i-1, i, temp)) {
                cout<<"YES"<<ee;
                return;
            }
            temp = -1;
            if(i+2 < n) temp = __gcd(v[i], v[i+2]);
            if(temp > 0 && possible(a, i, i+1, temp)) {
                cout<<"YES"<<ee;
                return;
            }
            ///////////////////
            temp = -1;
            if(i-2 >= 0 && i < n) temp = __gcd(v[i-2], v[i]);
            if(temp > 0 && possible(a, i-2, i-1, temp)) {
                cout<<"YES"<<ee;
                return;
            }
            temp = -1;
            if(i+1 < n) temp = __gcd(v[i-1], v[i+1]);
            if(temp > 0 && possible(a, i-1, i, temp)) {
                cout<<"YES"<<ee;
                return;
            }
            cout<<"NO"<<ee;
            return;
            // if(temp < a[i-1]) {
            //     cout<<"NO"<<ee;
            //     return;
            // }
            // a[i-1] = temp;
            // a[i] = temp;
            // c = true;
        } 
    }
    cout<<"YES"<<ee;
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