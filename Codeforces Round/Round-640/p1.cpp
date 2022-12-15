/*
	Problem link: https://codeforces.com/contest/1352/problem/0
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int isRound(int k)
{
    while(true)
    {
        if(k>9)
        {
            if(k%10==0)
                k/=10;
            else
                return 0;
        }
        else
            return 1;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int i = 0,temp=0, a[5], mod;
        while(n != 0)
        {
            if(isRound(n))
            {
                a[i] = n * pow(10,temp);
                i++;
                break;
            }
            else
            {
                mod = n%10;
                if(mod==0)
                {
                    n = n/10;
                    //i++;
                    temp++;
                    continue;
                }
                a[i] = mod * pow(10,temp);
                n = n/10;
                i++; temp++;
            }
        }
        cout<<i<<endl;
        for(int j=0; j<i; j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
