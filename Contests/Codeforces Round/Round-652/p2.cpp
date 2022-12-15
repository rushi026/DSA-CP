/*
    Problem:            B. AccurateLee
    Problem link:       https://codeforces.com/contest/1369/problem/B
    Contest:            Codeforces Round #652 (Div. 2)
    Date:               23/06/2020
    Last Updated:       24/06/2020
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
    char s[n];
    cin>>s;
    ll i;
    ll anz=0, pno=0;
    loop(i,0,n,1)
    {
        if(s[i] == '0')
            anz++;
        else
            break;
    }
    rloop(i,n-1,0,1)
    {
        if(s[i] == '1')
            pno++;
        else
            break;
    }
    bool badhaOne = true;
    loop(i,anz,n,1)
        if(s[i] == '0')
            badhaOne = false;
    if(anz > 0)
        loop(i,0,anz,1)
            cout<<"0";
    if(!badhaOne && !(anz + pno == n))
        cout<<"0";
    if(pno > 0)
        loop(i,0,pno,1)
            cout<<"1";
    cout<<endl;
    return;
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

