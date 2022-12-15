/*
    Problem:            A. Suffix Three
    Problem link:       https://codeforces.com/contest/1281/problem/A
    Contest:            Codeforces Round #607 (Div. 2)
    Date:               08/07/2020
    Last Updated:       08/07/2020
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
#define speedy              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


/***********************************/
void solve()
{
    string s;
    cin>>s;
    ll n = s.length();
    if(s[n-1] == 'o')
        cout<<"FILIPINO"<<endl;
    else if(s[n-1] == 'u')
        cout<<"JAPANESE"<<endl;
    else
        cout<<"KOREAN"<<endl;
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
