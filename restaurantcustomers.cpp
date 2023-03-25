#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie()->sync_with_stdio(0);
    int n;
    cin>>n;
    vector<pair<int,int>> times;
    for(int i=0; i<n; i++){
        int start, end;
        cin>>start>>end;
        times.push_back({start,1});
        times.push_back({end,-1});
    }
    sort(times.begin(), times.end());
    int current=0, maxppl=0;
    for(const pair<int,int>t:times){
        current+=t.second;
        maxppl=max(maxppl,current);
    }
    cout<<maxppl;
    return 0;
}
