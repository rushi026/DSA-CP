/*
    Problem:            B. Sequential Nim
    Problem link:       https://codeforces.com/contest/1382/problem/B
    Contest:            Codeforces Round #658 (Div. 2)
    Date:               21/07/2020
    Last Updated:       21/07/2020
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
    ll n;
    cin>>n;
    ll a[n];
    ll i;
    bool badhaOne = true;
    ll aagadNa1 = 0;
    loop(i,0,n,1)
    {
        cin>>a[i];
        if(badhaOne)
        {
            if(a[i] == 1)
                aagadNa1++;
            else
                badhaOne = false;
        }
    }
    if(badhaOne)
    {
        if(n&1)
        {
            cout<<"First"<<endl;
            return;
        }
        else
        {
            cout<<"Second"<<endl;
            return;
        }
    }
    else
    {
        if(aagadNa1&1)
        {
            cout<<"Second"<<endl;
            return;
        }
        else
        {
            cout<<"First"<<endl;
            return;
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
