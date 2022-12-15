/*
    Problem:            B. Remove Prefix
    Problem link:       https://codeforces.com/contest/1714/problem/B
    Contest:            Codeforces Round #811 (Div. 3)
    Date:               02/08/2022
    Last Updated:       02/08/2022
    Author:             Rushiraj Parekh
*/

#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(auto &i: v) cin>>i;
    map<long long, long long> m;
    for(int i=n-1; i>=0; i--){
        if(!m[v[i]]) m[v[i]]++;
        else {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
}
 
 
int main() {
    long long t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}