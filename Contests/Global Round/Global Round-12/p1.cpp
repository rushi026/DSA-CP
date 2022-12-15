/*
    Problem:            A. Avoid Trygub
    Problem link:       http://codeforces.com/contest/1450/problem/A
    Contest:            Codeforces Global Round 12
    Date:               06/12/2020
    Last Updated:       06/12/2020
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
    ll a;
    cin>>a;
    char s[a];
    ll i, c=0, cnt=0;
    loop(i,0,a,1) {
        cin>>s[i];
        if(s[i] == 'b')
            c++;
    }
    loop(i,0,a,1) {
        if(s[i] == 'b') {
            swap(s[i], s[cnt]);
            cnt++;
            if(cnt == c)
                break;
        }
    }
    loop(i,0,a,1) {
        cout<<s[i];
    }
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
