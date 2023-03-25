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
    int nd=a[0],st=a[0],flag=0;
    for(int i=0;i<n;++i){
        if(st>a[i]||st<a[i]) flag+=1;
        if(st>a[i]) st=a[i];
    }
    if(flag==0) cout<<"-1 -1";
    else{
        cout<<st;
        flag=0;
        for(int i=0;i<n;++i)
            if(a[i]!=st&&nd!=st){
                if(nd>a[i]||nd<a[i]) flag+=1;
                if(nd>a[i]) nd=a[i];
            }
        if(flag==0) cout<<" -1";
        else cout<<" "<<nd;
    }
}
int main(){
    freopen("MANG04.INP", "r", stdin);
    freopen("MANG04.OUT", "w", stdout);
    ReadData();
    Solve();
    return 0;
}