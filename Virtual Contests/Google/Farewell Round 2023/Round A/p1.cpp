/*
    Problem:            Colliding Encoding
    Link:               https://codingcompetitions.withgoogle.com/codejam/round/0000000000c95b94/0000000000cad7cf
    Contest:            Farewell Rounds 2023
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

ll power(ll x, ll y) {
    ll res = 1;
    while(y>0) {
        if(y&1) res *= x;
        x *= x;
        y >>= 1;
    }
    return res;
}


/***********************************/
void solve(ll t) {
    vector<int> v(26);
    scan(v);
    ll n;
    bool flag = false;
    cin>>n;
    map<string, int> m;
    vector<string> s(n);
    loop(i,0,n,1) {
        cin>>s[i];
        string hash = "";
        loop(j,0,s[i].length(),1) hash += v[s[i][j]-65] + 48;
        if(m[hash]) flag = true;
        else m[hash]++;
    }
    if(flag) cout<<"Case #"<<t<<": YES"<<ee;
    else cout<<"Case #"<<t<<": NO"<<ee;
}

/***********************************/
int main() {

    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    // speedy;
    ll t=1;
    cin>>t;
    // while(t--) solve();
    loop(i,1,t+1,1) solve(i);
    return 0;
}