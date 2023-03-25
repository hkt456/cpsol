#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int a[maxN],n;
void ReadData(){
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
int calc(){
    float num=0;
    for(int i=0;i<n;++i)
        num+=a[i];
    return num/=n;
}
void Solve(){
    float num=calc();
    int ans=0;
    for(int i=0;i<n;++i)
        if(a[i]>num) ans+=1;
    cout<<ans;
}
int main(){
    freopen("TASK86.INP", "r", stdin);
    freopen("TASK86.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}
