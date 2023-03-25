#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000
int a[maxN],n;
void ReadData(){
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
void Solve(){
    int ans=a[0],num=0;
    for(int i=0;i<n;++i){
        if(ans==a[i]) num+=1;
        if(a[i]<ans){
            ans=a[i];
            num=1;
        }
    }
    cout<<ans<<" "<<num;
}
int main(){
    freopen("TASK87.INP", "r", stdin);
    freopen("TASK87.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}

