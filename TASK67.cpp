#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000
int a[maxN],n,x;
void ReadData(){
    cin>>n>>x;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
int solve(){
    int ans=0;
    for(int i=0;i<n;++i){
        if(a[i]!=0&&x%a[i]==0) ans+=1;
    }
    return ans;  
}
int main(){
    freopen("TASK67.INP", "r", stdin);
    freopen("TASK67.OUT", "w", stdout);
    ReadData();
    int ans=solve();
    cout<<ans;
    return 0;
}