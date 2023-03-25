#include <iostream>
#include <math.h>
using namespace std;
bool Solve(int x){
    int a=sqrt(x);
    for(int i=2; i<=a; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}