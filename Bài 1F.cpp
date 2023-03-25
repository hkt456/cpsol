#include <iostream>
#include <math.h>
using namespace std;
double n;
double solve() 
{
    double s=n,i=n-1;
    while (i >= 1)
    {
        s = i + (1/s);
        --i;
    }
    return s;  
}
int main()
{
    cin>>n;
    cout<<solve();
    return 0;
}