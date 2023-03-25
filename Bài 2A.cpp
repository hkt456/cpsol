#include <iostream>
#include <math.h>
using namespace std;
int solve(int x, int y)
{
    int k=1, S=0;
    for(int i=1; i<=x; i++){
        k = k*i % y;
        S = (S + k) % y;
    }
    return S;
}

int main()
{
    int n, m;
    cin>>n>>m;
    cout<<solve(n,m);
    return 0;
}
