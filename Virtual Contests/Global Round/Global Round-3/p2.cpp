/*
    Problem:            xyz
    Problem link:       xyz
    Contest:            xyz
    Date:               dd/mm/yyyy
    Last Updated:       dd/mm/yyyy
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
    ll n,m,t1,t2,k;
    cin>>n>>m>>t1>>t2>>k;
    ll i,j, a[n], b[m];
    loop(i,0,n,1)
        cin>>a[i];
    loop(j,0,m,1)
        cin>>b[j];
    if(n<=k)
    {
        cout<<-1<<endl;
        return;
    }
    ll temp = a[k] + t1;

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
