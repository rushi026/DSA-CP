/*
    Problem:            C. Ball in Berland
    Problem link:       https://codeforces.com/contest/1475/problem/C
    Contest:            Codeforces Round #697 (Div. 3)
    Date:               25/01/2020
    Last Updated:       25/01/2020
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
using namespace std;

/***********************************/

#define ll                  long long int
#define ull                 unsigned long long int
#define loop(i,x,y,z)       for(ll i=x; i<y; i+=z)
#define rloop(i,x,y,z)      for(ll i=x; i>=y; i-=z)
#define endl                '\n'
#define vll                 vector<ll>
#define scan(v)             for(auto &i : v) cin>>i;
#define print(v)            for(auto i : v) cout<<i<<" ";
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    ll a,b,k;
    cin>>a>>b>>k;
    ll c=0;
    ll i,j;
    ll aa[k], bb[k];
    loop(i,0,k,1)
        cin>>aa[i];
    loop(i,0,k,1)
        cin>>bb[i];
    loop(i,0,k,1) {
        loop(j,0,k,1){
            if(i==j)
                continue;
            if(aa[i] != aa[j] && bb[i] != bb[j])
                c++;
        }
    }
    cout<<c/2<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
