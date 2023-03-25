#include <iostream>
#include <math.h>
using namespace std;
int Solve(int x)
{
    int count=0;
    while(x>0){
        x/=10;
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}