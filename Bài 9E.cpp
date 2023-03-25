
#include <iostream>
#include <math.h>
using namespace std;
int Solve(int x){
    int Max=0, i=0;
    while(x>0){
        i=x%10;
        if(i%2==0){
            Max=max(Max, i);
        }
        x/=10;
    }
    if(Max==0){
        return -1;
    }
    return Max;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}