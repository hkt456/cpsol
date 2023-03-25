#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int array[maxN], n;
void ReadData(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}
bool Check(int x){
    if(x<2) return false;
    float m=sqrt(x);
    for(int i=2; i<=m; i++){
        if(x%i==0) return false;
    }
    return true;
}
int Solve(){
    int answer=-2, Max=-1;
    for(int i=0; i<n; i++){
        if(Check(array[i])){
            if(array[i]>Max){
                answer=i;
                Max=array[i];
            }
        }
    }
    return answer+1;
}
int main(){
    freopen("TASK75.inp", "r", stdin);
    freopen("TASK75.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}