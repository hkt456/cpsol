#include <bits/stdc++.h>
using namespace std;
const int md= (int)1e9 + 7;
int main(){
    cin.tie()->sync_with_stdio(0);
    long long n, x;
    cin>>n>>x;
    long long coins[n], dp[x+5]={0};
    for(int i=0;i<n;i++) cin>>coins[i];
    sort(coins, coins+n);
    dp[0]=1;
    for(int i=0; i<=x; i++){
        for(int c=0; c<n; c++){

            if(i-coins[c]<0) break;
            else {
                dp[i]=(dp[i]+dp[i-coins[c]])%md;
            }
        }
    }
    cout<<dp[x]%md;
    return 0;
}