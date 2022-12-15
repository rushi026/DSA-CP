/*  *** A1 ***
    Problem:            A. K-divisible Sum
    Problem link:       https://codeforces.com/contest/1476/problem/A
    Contest:            Educational Codeforces Round 103
    Date:               29/01/2021
    Last Updated:       29/01/2021
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
bool solve()
{
    srand(time(0));
    ll n,k;
    // cin>>n>>k;
    n = (rand() % 99999) + 51;
    k = (rand() % 50) + 1;
    cout<<n<<" "<<k<<endl;
    // if(k == 1)
    // {
    //     cout<<1<<endl;
    //     return;
    // }
    // if(k%n == 0)
    // {
    //     cout<<k/n<<endl;
    //     return;
    // }
    // if(n%k == 0)
    // {
    //     cout<<1<<endl;
    //     return;
    // }
    // if(n < k)
    // {
    //     cout<<(k/n) + (1)<<endl;
    //     return;
    // }
    ll c = k;
    while(true)
    {
        k += c;
        if(k>n)
        {
            cout<<(k/n) + (1)<<endl;
            if((k/n)+1 != 2)
                return true;
            else
                return false;
        }
    }
}

/***********************************/
int main()
{
    // speedy;
    ll t=1;
    // cin>>t;
    while(true)
        if(solve())
            break;
    return 0;
}
