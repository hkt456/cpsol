#include <math.h>
#include <iostream>
using namespace std;
void Solve(int x){
    int i=2;
    while(x!=1){
        if(x%i==0){
            cout<<i;
            x/=i;
        }
        else{
            i++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    Solve(n);
    return 0;
}
