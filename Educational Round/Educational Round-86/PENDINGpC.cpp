/*
    Problem link: https://codeforces.com/contest/1342/problem/C
*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,q;
        cin>>a>>b>>q;
        long long int xy[q*2];
        int ans[q];
        for(int i=0;i<q*2;i++)
        {
            cin>>xy[i];
        }
        for(int i=0; i<q*2; i+=2)
        {
            int temp = 0;
            for(int j=xy[i]; j<=xy[i+1]; j++)
            {
                if(((j % a)%b) != ((j % b)% a))
                    temp++;
            }
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    return 0;
}
