#include <iostream>
#include <math.h>
using namespace std;
int solve(int x,int y, int z) 
{
    int Exp=1,S=0;
    for (int i=0; i <= x; i++)
    {
        S = (S + Exp) % y;
        Exp = (Exp*z)%y;
    }
    return S;
}
int main()
{
    int n,m,k;
    cin >>n>>m>>k;
    cout<<solve(n,m,k);
    return 0;
}