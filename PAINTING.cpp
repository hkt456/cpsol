#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
typedef long long ll;
void solve(ll titlesNumber, ll &whiteTitles, ll &blackTitles) 
{
    int i=1;
    blackTitles=0,whiteTitles=titlesNumber;
    double m=sqrt(titlesNumber);
    while(i<m){
        if (titlesNumber%i==0)
            blackTitles+=2;
        ++i;
    }
    if (titlesNumber%i==0)
            blackTitles+=1;
    whiteTitles-=blackTitles;
}
int main()
{
    ll n,y,x;
    freopen("PAINTING.INP","r", stdin);
    freopen("PAINTING.OUT","w", stdout);
    cin>>n;
    solve(n,y,x);
    cout<<y<<" "<<x;
    return 0;
}