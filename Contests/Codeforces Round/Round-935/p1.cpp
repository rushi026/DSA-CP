/*
    Problem:            A. Setting up Camp
    Problem link:       https://codeforces.com/contest/1945/problem/A
    Contest:            Codeforces Round 935 (Div. 3)
    Date:               19/03/2024
    Last Updated:       19/03/2024
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
void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    if (b % 3 == 1) {
        if(c < 2) {
            cout<<-1<<endl;
            return;
        }
        b += 2;
        c -= 2;
    } else if (b % 3 == 2) {
        if(c < 1) {
            cout<<-1<<endl;
            return;
        }
        b++;
        c--;
    }
    cout<< (b / 3) + a + (c / 3) + (c%3 ? 1 : 0) << endl;
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