#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end() 

void solve() {
     int n;
     cin >> n;
     string s;
     cin >> s;
     ll ans = 0;
     for (int i = 0; i < n; i++){
        vector<int> cnt (10);
        int diff = 0;
        for (int j=i;j<min(n,i+288); j++) {
            auto c = s[j] - '0';
            if (cnt[c] == 0){
                diff++;
            }
            cnt[c]++;
            if(*max_element(all(cnt)) <= diff){
                ans++;
            }
        }
     }
     cout << ans << endl;
 }

 int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 }