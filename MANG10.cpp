#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int a[maxN],n,x;
void ReadData(){
    cin>>n>>x;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
void Solve(){
    int turns=x%n;
    for(int i=turns;i<n;++i)
        cout<<a[i]<<" ";
    for(int i=0;i<turns;++i)
        cout<<a[i]<<" ";
}
int main(){
    freopen("MANG10.INP", "r", stdin);
    freopen("MANG10.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}