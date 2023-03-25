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
    int nd=x-st;
    for(int j=i+1;j<n;++j)
        if(a[j]==nd){
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
    freopen("TASK70.INP", "r", stdin);
    freopen("TASK70.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}