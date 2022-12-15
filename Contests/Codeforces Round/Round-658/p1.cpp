/*
    Problem:            A. Common Subsequence
    Problem link:       https://codeforces.com/contest/1382/problem/A
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
    ll n,m;
    cin>>n>>m;
    ll a[n], b[m];
    ll i;
    loop(i,0,n,1)
    cin>>a[i];
    ll j,k;
    bool temp = true;
    loop(i,0,m,1)
    {
        cin>>b[i];
        if(temp)
        {
            loop(j,0,n,1)
            {
                if(b[i] == a[j])
                {
                    k = b[i];
                    temp = false;
                }
            }
        }
    }
    if(!temp)
        cout<<"YES"<<endl<<1<<" "<<k<<endl;
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
