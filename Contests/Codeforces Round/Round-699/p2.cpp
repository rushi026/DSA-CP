/*
    Problem:            B. New Colony
    Problem link:       https://codeforces.com/contest/1481/problem/B
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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    ll i; bool temp = true;
    loop(i,0,n,1)
    {
        cin>>a[i];
        if(i > 0 && a[i] < a[i-1])
        {}
        else
        {
            if(i!=0)
                temp = false;
        }
    }
    if(temp)
    {
        cout<<-1<<endl; return;
    }
    i = 0; 
    ll p = 0;

    while(k--)
    {
        loop(i,0,n-1,1)
        {
            if(a[i] >= a[i+1])
            {
                if(i == n-2)
                {
                    cout<<-1<<endl; return;
                }
                continue;
            }
            else
            {
                if(k == 0)
                {
                    cout<<i+1<<endl; return;
                }
                a[i] ++;
                break;
            }
            if(i == n-2 && a[i] >= a[i+1])
            {
                cout<<-1<<endl; return;
            }
        }
    }
    cout<<p+1<<endl;
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
