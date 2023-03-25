#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int Solve(int bambooLength, int divLength){
    int divisions=bambooLength/divLength;
    if(bambooLength%divLength!=0){
        divisions++;
    }
    return divisions;
}
int main(){
    int L,n;
    cin>>L>>n;
    cout<<Solve(L,n);
    return 0;
}