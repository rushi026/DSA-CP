/*
    Problem:            C. Pluses and Minuses
    Problem link:       https://codeforces.com/contest/1373/problem/C
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
    ll res = 0, init = 0;
    while(1)
    {
        ll cur = init;
        bool ok = true;
        ll i=0;
        while(s[i] != '\0')
        {
            res++;
            if(s[i] == '+')
                cur++;
            else
                cur--;
            if(cur<0)
            {
                ok = false;
                break;
            }
            i++;
        }
        if(ok)
            break;
        init++;
    }
    cout<<res<<endl;
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

