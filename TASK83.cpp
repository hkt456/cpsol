#include <iostream>
#include <math.h>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
#define maxN 1000
int a[maxN],n,k;
void ReadData(){
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n,greater<int>());
}

void Solve(){
    int sum=0;
    for(int i=0;i<k;++i)
        sum+=a[i];
    cout<<sum;
}
int main(){    
    freopen("TASK83.INP", "r", stdin);
    freopen("TASK83.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}