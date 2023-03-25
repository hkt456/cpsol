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
    int nd=a[0],st=a[0],num1=0,num2=0;
    for(int i=0;i<n;++i){
        if(st>a[i]){ 
            st=a[i];
            num1=i;
        }
    }
    for(int i=0;i<n;++i){
        if(nd>a[i]&&i!=num1){
            nd=a[i];
            num2=i;
        }
    }
    cout<<num1+1<<" "<<num2+1;
}
int main(){
    freopen("MANG05.INP", "r", stdin);
    freopen("MANG05.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}