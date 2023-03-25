#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int a[maxN],n;
int Check(int n){
    int j=2,ans=1;
    int m=sqrt(n);
    while(j<=m){
        if (n%j==0)
            ans=0;
        ++j;
    }
    return ans;
}
void ReadData(){
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
int Solve(){
    int ans=0;
    for(int i=0;i<n;++i){
        if(a[i]>1){
            int temp=Check(abs(a[i]));
            if(temp==1) ans+=1;
        }
    }
    return ans;  
}
int main(){
    freopen("MANG03.INP", "r", stdin);
    freopen("MANG03.OUT", "w", stdout);
    ReadData();
    int ans=Solve();
    cout<<ans;
    return 0;
}