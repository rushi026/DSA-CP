/*
    Problem:            B. Last Year's Substring
    Problem link:       https://codeforces.com/contest/1462/problem/B
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
    char a[n];
    ll i;
    loop(i,0,n,1)
        cin>>a[i];
    if(a[0] == '2' && a[1] == '0' && a[2] == '2' && a[3] == '0') {
        cout<<"YES"<<endl;
        return;
    }

    if(a[n-4] == '2' && a[n-3] == '0' && a[n-2] == '2' && a[n-1] == '0') {
        cout<<"YES"<<endl;
        return;
    }

    if(a[0] == '2'){
        if(a[1] == '0') {
            if(a[2] == '2') {
                if(a[n-1] == '0') {
                    cout<<"YES"<<endl;
                    return;
                } else {
                    cout<<"NO"<<endl;
                    return;
                }
            } else {
                if(a[n-1] == '0' && a[n-2] == '2') {
                    cout<<"YES"<<endl;
                } else {
                    cout<<"NO"<<endl;
                }
            }
        } else {
            if(a[n-1] == '0' && a[n-2] == '2' && a[n-3] == '0') {
                cout<<"YES"<<endl;
                return;
            } else {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    else {
        cout<<"NO"<<endl;
    }
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
