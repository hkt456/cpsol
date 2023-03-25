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
void Check(int x, int i, int &flag){
    for(int j=i+1; j<n; j++){
        if(x+a[j]==0){
            cout<<i+1<<" "<<j+1<<"\n";
            flag=1;
        }
    }
}
void Solve(){
    int flag=0;
    for(int i=0; i<n; i++){
        Check(a[i], i, flag);
    }
    if(flag==0) cout<<"NO SOLUTION";
}
int main(){
    freopen("TASK82.inp", "r", stdin);
    freopen("TASK82.out", "w", stdout);
    ReadData();
    Solve();
    return 0;
}