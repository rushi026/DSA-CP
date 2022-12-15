/*
    Problem:            B. Omkar and Last Class of Math
    Problem link:       https://codeforces.com/contest/1372/problem/B
    Contest:            Codeforces Round #655 (Div. 2)
    Date:               11/07/2020
    Last Updated:       11/07/2020
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
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


void solve()
{
    ll n;
    cin>>n;
    if(!(n&1))
    {
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    if(isPrime(n))
    {
        cout<<1<<" "<<n-1<<endl;
        return;
    }
    ll i;
    loop(i,3,(n/2)+1,1)
    {
        if(n%i == 0)
        {
            cout<<n/i<<" "<<n-(n/i)<<endl;
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

