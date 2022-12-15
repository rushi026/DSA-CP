/*
    Problem:            B. Multiply by 2, divide by 6
    Problem link:       https://codeforces.com/contest/1374/problem/B
    Contest:            Codeforces Round #653 (Div. 3)
    Date:               28/06/2020
    Last Updated:       29/06/2020
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
    ull n;
    cin>>n;
    ull ans=0;
    while(1)
    {
        if(n==6)
        {
            cout<<ans+1<<endl;
            return;
        }
        if(n==1)
        {
            cout<<ans<<endl;
            return;
        }
        if(n%6==0)
            n /= 6;
        else
            n *= 2;
        ans++;
        if(n%3 != 0)
        {
            cout<<-1<<endl;
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
