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
void check(int st, int i, int&flag){
    for(int j=i+1;j<n;++j)
        if(abs(a[j]-st)==x){
            cout<<i+1<<" "<<j+1<<"\n";
            flag=1;
        }
}
void Solve(){
    int flag=0;
    for(int i=0;i<n;++i)
        check(a[i],i,flag);
    if(flag==0) cout<<"NO SOLUTION";
}
int main(){
    freopen("TASK81.INP", "r", stdin);
    freopen("TASK81.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}