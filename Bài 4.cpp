#include <iostream>
#include <math.h>
using namespace std;
int solve(int y)
{
    double S=1;
    int i=2;
    while(S<y){
        S+=sqrt(i);
        ++i;
    }
    int x=i-1;
    return x;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}

