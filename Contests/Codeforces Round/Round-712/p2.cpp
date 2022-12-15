/*
    Problem:            B. Flip the Bits
    Problem link:       https://codeforces.com/contest/1504/problem/B
    Contest:            Codeforces Round #712 (Div. 2)
    Date:               03/04/2021
    Last Updated:       03/04/2021
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
    char a[n], b[n];
    cin>>a;
    cin>>b;
    if(a == b){cout<<"YES"<<endl; return;}
    ll i, numOf0a = 0, numof0b = 0, pred = 0; bool temp = true;
    loop(i,0,n,1)
    {
        if(a[i] == '0') numOf0a++;
        if(b[i] == '0') numof0b++;
        
    }
    if(numof0b == numOf0a) cout<<"YES"<<endl;
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
