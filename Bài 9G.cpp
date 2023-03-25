#include <iostream>
#include <math.h>
using namespace std;
bool Solve(int x){
    int a=x%10, b;
    x/=10;
    while(x!=0){
        b=x%10;
        x/=10;
        if(a<b){
            return false;
        }
        a=b;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}       