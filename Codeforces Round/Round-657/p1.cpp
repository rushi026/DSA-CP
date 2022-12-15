/*
    Problem:            B. Dubious Cyrpto
    Problem link:       https://codeforces.com/contest/1379/problem/B
    Contest:            Codeforces Round #657 (Div. 2)
    Date:               19/07/2020
    Last Updated:       19/07/2020
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
    ll m,l,r;
    cin>>l>>r>>m;
    ll i;
    ll b=l,c=r;
    loop(i,l,r+1,1)
    {
        b=l;
        c=r;
        if((m+c-b)%i == 0)
        {
            cout<<i<<" "<<b<<" "<<c<<endl;
            return;
        }
        else
        {
            ll temp = (m+c-b) / i;
            ll temp2 = temp*i;
            ll dif = abs(temp2 - (m+c-b));
            c -= dif;
            if(c>r || c<l)
            {
                c += dif;
                b += dif;
                if(b<l || b>r)
                    continue;
                else
                {
                    cout<<i<<" "<<b<<" "<<c<<endl;
                    return;
                }
            }
            else
            {
                cout<<i<<" "<<b<<" "<<c<<endl;
                return;
            }
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
