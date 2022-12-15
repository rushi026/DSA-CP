/*
    Problem:            A. Array and Peaks
    Problem link:       https://codeforces.com/contest/1513/problem/A
    Contest:            Divide by Zero 2021 and Codeforces Round #714 (Div. 2)
    Date:               11/04/2021
    Last Updated:       11/04/2021
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
    if(n == 1 || n == 2)
    {
        if(n==1)
        {
            if(k == 0) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else
        {
            if(k == 0) cout<<1<<" "<<2<<endl;
            else cout<<-1<<endl;
        }
        return;
    }
    if((n-1)/2 < k)
    {
        cout<<-1<<endl; return;
    }
    vll a(n); ll i;
    loop(i,0,n,1)
        a[i] = i+1;
    loop(i,1,n,1)
    {
        if(k>0){
            swap(a[i], a[i+1]);
            i++;
            k--;
        }
        else break;
    }
    print(a); cout<<endl;
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
