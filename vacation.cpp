#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1],b[n+1],c[n+1];
    for(int i=1; i<=n; i++) cin>>a[i]>>b[i]>>c[i];
    int dp[n+5][4];
    for(int i=1; i<=3; i++) dp[i][0]=0;
    for(int i=1; i<=n; i++){
        dp[1][i]=max(dp[2][i-1]+a[i],dp[3][i-1]+a[i]);
        dp[2][i]=max(dp[1][i-1]+b[i],dp[3][i-1]+b[i]);
        dp[3][i]=max(dp[1][i-1]+c[i],dp[2][i-1]+c[i]);
    }
    cout<<max(max(dp[3][n],dp[2][n]),dp[1][n]);
    return 0;
}
