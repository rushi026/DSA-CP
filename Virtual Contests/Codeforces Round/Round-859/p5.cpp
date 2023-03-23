/*
    # Virtual Contest 
    Problem:            E. Interview
    Problem link:       https://codeforces.com/contest/1807/problem/E
    Contest:            Codeforces Round 859 (Div. 4)
    Date:               22/03/2023
    Last Updated:       22/03/2023
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


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    vll v(n), prefix(n);
    cin>>v[0];
    prefix[0] = v[0];
    loop(i,1,n,1) {
        cin>>v[i];
        prefix[i] = prefix[i-1] + v[i];
    }
    ll i = 0, j = n-1;
    while(true) {
        ll low = i, high = j;
        if(low == high) {
            cout<<"! "<<low+1<<ee;
            cout.flush();
            return;
        }
        ll mid = (low + high) / 2;
        ll sum = prefix[mid], weight;
        if(low > 0) sum -= prefix[low-1];
        cout<<"? "<<mid-low+1<<" ";
        loop(k,low,mid,1) cout<<k+1<<" ";
        cout<<mid+1<<ee;
        cout.flush();
        cin>>weight;
        if(sum == weight) i = mid + 1;
        else j = mid;
    }
}

/***********************************/
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../../../input.txt", "r", stdin);
    //     freopen("../../../output.txt", "w", stdout);
    // #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
