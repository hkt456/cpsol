#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a, pair<int,int> &b){
    return (a.second<b.second);
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> times;
    int rooms[n+1];
    rooms[0]=1;
    for(int i=0; i<n; i++){
        long long arrive, depart;
        cin>>arrive>>depart;
        times.push_back({arrive,depart}); 
    }
    sort(times.begin(),times.end(), cmp);
    long long k=1, currEnd=times[0].first;
    int roomNum=1;
    for(int i=1; i<=n; i++){
        if(times[i].second<times[i-1].second){
            rooms[i]=roomNum;
            continue;
        }
        else if(currEnd<=times[i].first){
            k++;
            roomNum++;
            rooms[i]=roomNum;
            currEnd=times[i].second;
        }
    }
    cout<<k;
    for(int i=0; i<n; i++) cout<<rooms[i]<<" ";
    return 0;
}