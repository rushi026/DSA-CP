/*
    Problem:            A. Space Navigation
    Problem link:       https://codeforces.com/contest/1481/problem/A
    Contest:            Codeforces Round #699
    Date:               05/02/2021
    Last Updated:       05/02/2021
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
    ll x,y;
    string s;
    cin>>x>>y;
    cin>>s;
    s += "Q";

    // if(x == 0 && y == 0)
    // {
    //     cout<<"YES"<<endl; return;
    // }

    bool xc = false, yc = false;
    if(x<=0)
    {
        ll temp = abs(x), k=0, i=0;
        while(true)
        {
            if(k == temp)
            {
                xc = true; break;
            }
            if(s[i] == 'L')
                k++;
            if(s[i] == 'Q')
                break;
            i++;
        }
    }
    else
    {
        ll temp = abs(x), k=0, i=0;
        while(true)
        {
            if(k == temp)
            {
                xc = true; break;
            }
            if(s[i] == 'R')
                k++;
            if(s[i] == 'Q')
                break;
            i++;
        }
    }

    if(y<=0)
    {
        ll temp = abs(y), k=0, i=0;
        while(true)
        {
            if(k == temp)
            {
                yc = true; break;
            }
            if(s[i] == 'D')
                k++;
            if(s[i] == 'Q')
                break;
            i++;
        }
    }
    else
    {
        ll temp = abs(y), k=0, i=0;
        while(true)
        {
            if(k == temp)
            {
                yc = true; break;
            }
            if(s[i] == 'U')
                k++;
            if(s[i] == 'Q')
                break;
            i++;
        }
    }

    if(xc && yc)
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;
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
