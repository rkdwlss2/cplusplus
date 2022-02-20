//
//  boj17472.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/20.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int graph[11][11];
int board[11][11];
int n,m;

int Index=1;
vector<int> v;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
bool Check[11];
void makeLine(int sx,int sy,int num){
        
        for (int dir=0;dir<4;dir++){
            int x=sx;
            int y=sy;
            int idx=0;
            while(true){
                int nx=x+dx[dir];
                int ny=y+dy[dir];
                if (nx<0||nx>=n||ny<0||ny>=m)break;
                if (board[nx][ny]>0&&board[nx][ny]!=num){
                    int num2=board[nx][ny];
                    if (idx>1){
                        if (graph[num][num2]>idx){
                            graph[num2][num]=idx;
                            graph[num][num2]=idx;
                        }
                    }
                    break;
                }
                else if (board[nx][ny]==num){
                    break;
                }
                x=nx;
                y=ny;
                idx++;
            }
        
    }
}

//void go(int index,int prev){
//    if (index==2){
//
//        return;
//    }
//    for (int i=prev+1;i<Index;i++){
//        v.push_back(i);
//        go(index+1,i);
//        v.pop_back();
//    }
//}
bool visited[11];
void prim(int start){
    visited[start]=true;
    priority_queue<pair<int,int>> pq;
    for (int i = 1 ; i <= Index;i++){
        if (graph[start][i]==987654321)continue;
        pq.push({-graph[start][i],i});
    }
    int ans=0;
    while(!pq.empty()){
        int here=pq.top().second;
        int hereCost=-pq.top().first;
        pq.pop();
        if (visited[here])continue;
        visited[here]=true;
        ans+=hereCost;
        for (int i = 1 ; i <=Index;i++){
            if (graph[here][i]==987654321)continue;
            int there=i;
            int thereCost=graph[here][i];
            Check[here]=true;
            Check[there]=true;
            pq.push({-thereCost,there});
            
        }
    }
    if (ans==0)ans=-1;
    for (int i = 1;i<=Index;i++){
        if (!Check[i]){
            ans=-1;
        }
    }
    cout<<ans<<'\n';
    
}
int vis[11][11];
void bfs(int sx,int sy){
    queue<pair<int,int>> q;
    vis[sx][sy]=Index;
    q.push({sx,sy});
    while(!q.empty()){
        auto now = q.front();
        q.pop();
        int x=now.first;
        int y=now.second;
        for (int dir=0;dir<4;dir++){
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if (nx<0||nx>=n||ny<0||ny>=m)continue;
            if (board[nx][ny]==0||vis[nx][ny]>0)continue;
            vis[nx][ny]=Index;
            q.push({nx,ny});
        }
    }
    Index++;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i = 0 ; i < n;i++){
        for (int j = 0 ; j < m;j++){
            int tmp;
            cin>>tmp;
            board[i][j]=tmp;
        }
    }
    for (int i = 0 ; i  <n;i++){
        for (int j = 0 ; j <m;j++){
            if (vis[i][j]>0||board[i][j]==0)continue;
            bfs(i,j);
        }
    }
    Index--;
    for (int i = 0 ; i <n;i++){
        for (int j = 0 ; j < m;j++){
            if (vis[i][j]>0){
                board[i][j]=vis[i][j];
            }
        }
    }
    
    for (int i = 1 ; i <= Index;i++){
        for (int j = 1 ; j <=Index;j++){
            graph[i][j]=987654321;
        }
    }
    for (int i = 0 ; i < n;i++){
        for (int j = 0 ; j <m;j++){
            if (board[i][j]>0){
                int num=board[i][j];
                makeLine(i,j,num);
            }
        }
    }
    prim(1);
    
    
}
