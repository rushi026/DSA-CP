/*
    Problem:            B. Binary Removals
    Problem link:       https://codeforces.com/contest/1499/problem/B
    Contest:            Educational Codeforces Round 106
    Date:               18/03/2021
    Last Updated:       18/03/2021
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

bool fun(string s2)
{
    int M = 4; string s1 = "1100";
    int N = s2.length();
     for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return true;
    }
 
    return false;
}


void solve()
{
    string s;
    cin>>s;
    ll n = s.length();
    if(n < 4){
        cout<<"YES"<<endl;
        return;
    }
    if(fun(s))
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
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
