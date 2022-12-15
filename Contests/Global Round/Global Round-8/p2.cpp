/*
    Problem:            B. Codeforces Subsequences
    Problem link:       https://codeforces.com/contest/1368/problem/B
    Contest:            Codeforces Global Round 8
    Date:               18/6/2020
    Last Updated:       19/6/2020
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
    ull k,i=0;
    cin>>k;
    char s[] = "codeforces";
    int a[10] = {1,1,1,1,1,1,1,1,1,1};
    ll p = 1;
    static ll counter=0;
    while(1)
    {
        p = 1;
        loop(i,0,10,1)
        p *= a[i];
        if(p >= k)
            break;
        else
        {
            if(counter == 10)
                counter=0;
            a[counter++]++;
        }
    }
    ll j=0;
    loop(i,0,10,1)
    {
        loop(j,0,a[i],1)
            cout<<s[i];
    }
    cout<<endl;
}

/***********************************/
int main()
{
    speedy;
    ll t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
