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
int Solve(){
    int Answer=abs(array[1]-array[0]);
    for(int i=2; i<n-1; i++){
        if(abs(array[i]-array[i+1])<Answer) Answer=abs(array[i]-array[i+1]);
    }
    return Answer;
}
int main(){
    freopen("TASK72.inp", "r", stdin);
    freopen("TASK72.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}