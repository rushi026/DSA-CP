/*
    Problem link: https://codeforces.com/contest/1350/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int f(ll a)
{
    if(!(a&1))
        return 2;
    else
    {
        for(int i=3; i*i<=a; i++)
        {
            if(a%i==0)
                return i;
        }
        return a;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        n = n+f(n);
        n = n+((k-1)*2);
        cout<<n<<endl;
    }

    return 0;
}
