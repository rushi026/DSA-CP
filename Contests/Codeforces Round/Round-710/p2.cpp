/*
    Problem:            B. Partial Replacement
    Problem link:       https://codeforces.com/contest/1506/problem/B
    Contest:            Codeforces Round #710 (Div. 3)
    Date:               26/03/2021
    Last Updated:       26/03/2021
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
    ll n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    ll i, ans=0;
    loop(i,0,n,1)
    {
        if(a[i] == '*'){
            ans++;
            a[i] = 'x';
            break;
        }
    }
    rloop(i,n-1,0,1)
    {
        if(a[i] == 'x'){
            cout<<ans<<endl; return;
        }
        if(a[i] == '*'){
            ans++;
            a[i] = 'x';
            break;
        }
    }
    loop(i,0,n,1)
    {
        if(a[i] == 'x'){
            ll j = i+1, ind=(-1), dis=1;
            while(dis <= k && j<n)
            {
                if(a[j] == '*'){
                    ind = j;
                }
                if(a[j] == 'x'){
                    cout<<ans<<endl; return;
                }
                dis++; j++;
            }
            // if(ind != -1){
                ans++;
                a[ind] = 'x';
                i = ind-1;
            // }
        }
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
