#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000
int a[maxN],n,l,r;
void ReadData(){
    cin>>n>>l>>r;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
void Solve(){
    int ans=a[l-1],num=l-1;
    for(int i=l-1;i<r;++i)
        if(a[i]>=ans){
            ans=a[i];
            num=i;
        }
    cout<<num+1;
}
int main(){
    freopen("TASK88.INP", "r", stdin);
    freopen("TASK88.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}
