#include <bits/stdc++.h>
using namespace std;
const long long md=1e9+7;
int main(){
    int n,x;
    cin>>n>>x;
    long long coins[n], dp[x+5]={0};
    for(int i=0;i<n;i++) cin>>coins[i];
    sort(coins,coins+n);
    dp[0]=1;
    for(int j=1; j<=n; j++){
        for(int i=1; i<=x; i++){
            if(i-coins[j-1]>=0){
                dp[i]+=dp[i-coins[j-1]];
                dp[i]%=md;
            }
        }
    }
    cout<<dp[x];
    return 0;
}
