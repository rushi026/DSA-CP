/*
    Problem:            A. Wizard of Orz
    Problem link:       https://codeforces.com/contest/1467/problem/A
    Contest:            Codeforces Round #695 (Div. 2)
    Date:               08/01/2021
    Last Updated:       08/01/2021
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
    ll n;
    cin>>n;
    ll a = 9; bool tmp = true; ll temp = 0;
    while(n--) {
        cout<<a;
        temp++;
        if(temp == 19)
            break;
        if(tmp)
            a--;
        else
            a++;
        if(a == -1) {
            a++; a++;
            tmp = false;
        }
        if(a == 10) {
            a--; a--;
            tmp = true;
        }
    }
    a = 0;
    while(n--) {
        cout<<a;
        a++;
        if(a == 10)
            a=0;
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
