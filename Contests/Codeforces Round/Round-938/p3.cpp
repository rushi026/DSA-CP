/*
    Problem:            C. Inhabitant of the Deep Sea
    Problem link:       https://codeforces.com/contest/1955/problem/C
    Contest:            Codeforces Round 938 (Div. 3)
    Date:               08/04/2024
    Last Updated:       08/04/2024
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

bool odd(ll n) {
    return n&1;
}

void solve() {
    ll n, k, sum = 0;
    cin>>n>>k;
    vector<int> v(n);
    for(int &i: v) {
        cin>>i;
        sum += i;
    }
    if(sum <= k) {
        cout<<n<<ee;
        return;
    }
    int i = 0, j = n - 1;
    bool front = true;
    while(k > 0) {
        if(i > j) {
            cout<<n<<ee;
            return;
        }
        ll aage = v[i], piche = v[j];
        ll ii = k/2, jj = k/2;
        if(odd(k)) {
            if(front) ii++;
            else jj++;
        }
        if(ii >= aage && jj >= piche) {
            if(aage <= piche) {
                if(odd(aage + max(aage, jj))) front = !front;
                v[i] = 0;
                i++;
                k -= aage;
                v[j] -= max(aage, jj);
                k -= max(aage, jj);
                if(!v[j]) j--;
            } else {
                if(odd(piche + max(piche, ii))) front = !front;
                v[j] = 0;
                j--;
                k -= piche;
                v[i] -= max(piche, ii);
                k -= max(piche, ii);
                if(!v[i]) i++;
            }
        }
        else if(ii >= aage) {
            if(odd(aage + max(aage, jj))) front = !front;
            v[i] = 0;
            i++;
            k -= aage;
            v[j] -= max(aage, jj);
            k -= max(aage, jj);
            if(!v[j]) j--;
        } else if(jj >= piche) {
            if(odd(piche + max(piche, ii))) front = !front;
            v[j] = 0;
            j--;
            k -= piche;
            v[i] -= max(piche, ii);
            k -= max(piche, ii);
            if(!v[i]) i++;
        } else {
            cout<< n - (j-i+1) <<ee;
            return;
        }
    }
    if(i > j) cout<<n<<ee;
    else cout<< n - (j-i+1) <<ee;
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