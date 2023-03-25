#include <bits/stdc++.h>
using namespace std;
bool visited[25][25];
int dX[4]={-1,1,0,0};
int dY[4]={0,0,-1,1};
int m,n;
char grid[25][25];
vector<pair<int,int>> notes;
bool isValid(int x, int y){
    if(x<0||y<0||y>m||x>n||grid[y][x]) return false;
    else return true;
}
void dfs(int x, int y){
    visited[y][x]=true;
    for(int i=0; i<4;i++){
        int newX=x+dX[i];
        int newY=y+dY[i];
        if(isValid(x,y)) dfs(newX,newY);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        notes.clear();
        cin>>m>>n;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>grid[i][j];
                visited[i][j]=false;
                if(grid[i][j]=='.'){
                    if(i==0||i==m-1||j==0||j==n-1){
                        notes.push_back(make_pair(i,j));
                    }
                }
            }
        }
        if(notes.size()!=2){
            cout<<"invalid"<<endl;
            continue;
        }
        dfs(notes[0].first,notes[0].second);
        if(visited[notes[1].first][notes[1].second]) cout<<"valid"<<endl;
        else cout<<"invalid"<<endl;
    }
}