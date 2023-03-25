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
bool Check(){
    int jump=array[1]-array[0];
    for(int i=1; i<n-1; i++){
        if(array[i]+jump!=array[i+1]) return false; 
    }
    return true;
}
void Solve(){
    int jump=array[1]-array[0];
    if(Check()){
        cout<<"YES"<<"\n"<<jump;
    }
    else cout<<"NO";
}
int main(){
    freopen("TASK69.inp", "r", stdin);
    freopen("TASK69.out", "w", stdout);
    ReadData();
    Solve();
    return 0;
}