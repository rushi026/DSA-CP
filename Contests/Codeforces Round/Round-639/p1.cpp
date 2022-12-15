/*
    Problem link: https://codeforces.com/contest/1345/problem/A
*/

#include<iostream>
using namespace std;

typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1 || m==1)
            cout<<"YES"<<endl;
        else if(n==2 && m==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
