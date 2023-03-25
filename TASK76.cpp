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
void Solve(){
    cout<<a[0];
    for(int i=1;i<n;++i){
        if(a[i]>=a[i-1]) cout<<" "<<a[i];
        else cout<<"\n"<<a[i];
    }
}
int main(){
    freopen("TASK76.INP", "r", stdin);
    freopen("TASK76.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}