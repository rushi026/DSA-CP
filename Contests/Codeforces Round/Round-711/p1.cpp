/*
    Problem:            A. GCD Sum
    Problem link:       https://codeforces.com/contest/1498/problem/A
    Contest:            CodeCraft-21 and Codeforces Round #711 (Div. 2)
    Date:               29/03/2021
    Last updated:       29/03/2021
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
#define ins(vec,pos,val)    vec.emplace(vec.begin()+pos, val)
#define del(vec,pos)        vec.erase(vec.begin()+pos)                


/***********************************/
void solve()
{
    ull n, temp, ans;
    cin>>n;
    while(true)
    {
        ull sumOfN = 0;
        ll i; temp = n;
        while(true)
        {
            if(temp == 0) break;
            sumOfN += temp%10;
            temp /= 10;
            if(temp == 0) break;
        }
        if(__gcd(n,sumOfN) > 1) {cout<<n<<endl; return;}
        else n++;
    }
}

/***********************************/
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("D:/Programming/codeforces/Contests/input.txt", "r", stdin);
        freopen("D:/Programming/codeforces/Contests/output.txt", "w", stdout);
    #endif

    speedy;
    ll t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
