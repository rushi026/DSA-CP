/*
    Problem:            B. Substring Removal Game
    Problem link:       https://codeforces.com/contest/1398/problem/B
    Contest:            Educational Codeforces Round 93
    Date:               14/08/2020
    Last Updated:       14/08/2020
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
    s = s+"0";
    ll i, seq = 1;
    int a[100], j=0;
    loop(i,0,s.length(),1)
    {
        if(s[i] == '1')
        {
            if(s[i+1] == '1')
            {
                seq++;
            }
            else
            {
                a[j++] = seq;
            }
        }
        else
        {
            seq = 1;
        }
    }
    sort(a,a+j);

    ll ans = 0;
    bool temp = true;
    rloop(i,j-1,0,2)
    {
        ans += a[i];
    }
    cout<<ans<<endl;
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

