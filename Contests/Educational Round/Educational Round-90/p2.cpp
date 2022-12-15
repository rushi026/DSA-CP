/*
    Problem:            B. 01 Game
    Problem link:       https://codeforces.com/contest/1373/problem/B
    Contest:            Educational Codeforces Round 90
    Date:               25/06/2020
    Last Updated:       25/06/2020
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
    ll len = s.length();
    ll i;
    ll one=0;
    ll zero=0;
    loop(i,0,len,1)
    {
        if(s[i] == '0')
            zero++;
        else
            one++;
    }
    if(one == len || zero == len)
        cout<<"NET"<<endl;
    else
    {
        if(len==1)
            cout<<"NET"<<endl;
        else if(len==2)
            cout<<"DA"<<endl;
        else
        {
            ll t = min(one,zero);
            if(t&1)
                cout<<"DA"<<endl;
            else
                cout<<"NET"<<endl;
        }
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
