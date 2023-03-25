#include <bits/stdc++.h>
using namespace std;
long long md=1e9+7;
int main(){
    int dice[6]={1,2,3,4,5,6};
    int n;
    cin>>n;
    int dp[n+5]={0};
    dp[1]=1;
    dp[0]=1;
    for(int i=1; i<=n; i++){
        long long sum=0;
        for(auto d:dice){
            if(i-d>=0) sum+=dp[i-d];
        }
        dp[i]=sum%md;
    }
    cout<<dp[n];
}