#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,capacity;
    cin>>n>>capacity;
    int value[n+1],weight[n+1],dp[n+5][capacity+1]={0}; 
    for(int i=1;i<=n;i++) cin>>weight[i]>>value[i];
    for(int i=1; i<=capacity; i++){
        for(int j=1; j<=n; j++){
            if(i-weight[j]>=0){
                dp[j][i]=max(dp[j-1][i-1]+value[j],dp[j][i]);
            }
        }
    }
    cout<<dp[n][capacity];
    return 0;
}