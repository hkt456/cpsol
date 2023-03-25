#include <iostream>
#include <math.h>
using namespace std;
int Solve(int x){
    int count=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}