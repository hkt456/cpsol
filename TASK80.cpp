#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000
int a[maxN],b[maxN],n;
void ReadData(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];

        b[i]=a[i]*a[i];
    }
}
void check(int i, int&sum){
    sum=0;
    for(int j=0;j<n;++j)
        sum+=(b[i]-b[j]);
}
void Solve(){
    int temp=0,ans=0;
    check(0,temp);
    int sumans=temp;
    for(int i=0;i<n;++i){
        check(i,temp);
        if(temp>=sumans){
            ans=i;
            sumans=temp;
        }
    }
    cout<<sumans<<"\n"<<ans+1;
}
int main(){
    freopen("TASK80.INP", "r", stdin);
    freopen("TASK80.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}