/*
    Problem:            C. Unique Number
    Problem link:       https://codeforces.com/contest/1462/problem/C
    Contest:            Codeforces Round #690 (Div. 3)
    Date:               15/12/2020
    Last Updated:       15/12/2020
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
#define print(v)            for(auto i : v) cout<<i;
#define pb                  push_back
#define all(x)              x.begin(),x.end()
#define _sort(x)            sort(all(x))
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    int n;
    cin>>n;
    if(n<10) {
        cout<<n<<endl;
        return;
    }
    if(n>45) {
        cout<<-1<<endl;
        return;
    }
    vll a;
    ll i;
    rloop(i,9,1,1) {
        if(n>=i) {
            a.pb(i);
            n -= i;
        }
    }
    _sort(a);
    print(a);
    cout<<endl;
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
