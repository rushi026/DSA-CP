/*
    Problem:            Spy Detected!
    Problem link:       https://codeforces.com/contest/1512/problem/A
    Contest:            Codeforces Round #713 (Div. 3)
    Date:               10/04/2021
    Last Updated:       10/04/2021
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
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)                


/***********************************/
void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    ll i, temp=0;
    loop(i,0,n,1){
        cin>>a[i];
        if(i>1 && a[i] != a[i-1] && a[i] != a[i-2]) temp = i+1;
    }
    if(a[0] != a[1] && a[1] == a[2]) temp = 1;
    if(a[1] != a[2] && a[1] != a[0]) temp = 2;
    cout<<temp<<endl;
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif
    
    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
