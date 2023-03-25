#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 100
int a[maxN],n;
void ReadData(){
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
}
int check(int i,int j){
    int num=j-i+1;
    while(i<j){
        if(a[i]==a[j]){
            ++i;
            --j;
        }
        else return 0;
    }
    return num;
}
int Solve(){
    int count=0,x=0;
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            int o=check(i,j);
            if(o!=0) x=o;
            if(x>count) count=x;
        }
    }
    return count;
}
int main(){
    freopen("MANG11.inp", "r", stdin);
    freopen("MANG11.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}
