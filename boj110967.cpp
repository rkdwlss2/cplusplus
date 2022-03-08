//
//  boj110967.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/03/08.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;

vector<pair<int,int>> graph[101][101];

bool blink[101][101];

bool visited[101][101];

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(int x,int y){
    for (auto i : graph[x][y]){
        int nx=i.first;
        int ny=i.second;
        blink[nx][ny]=true;
        for (int dir =0 ; dir<4;dir++){
            int nnx=nx+dx[dir];
            int nny=ny+dy[dir];
            if (nnx<0||nnx>=n||nny<0||nny>=n)continue;
            if (visited[nnx][nny]==true&&blink[nx][ny]==true&&visited[nx][ny]==false){
                visited[nx][ny]=true;
                dfs(nx,ny);
            }
        }
    }
    for (int dir = 0 ; dir<4;dir++){
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if (nx<0||nx>=n||ny<0||ny>=n)continue;
        if (blink[nx][ny]==false||visited[nx][ny]==true)continue;
        visited[nx][ny]=true;
        dfs(nx,ny);
    }
    
    
}


//void bfs(){
//    queue<pair<int,int>> q;
//    visited[0][0]=true;
//    for (auto i : graph[0][0]){
//        blink[i.first][i.second]=true;
//    }
//    q.push({0,0});
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (auto i : graph[x][y]){
//            blink[i.first][i.second]=true;
//        }
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (blink[nx][ny]==false||visited[nx][ny]==true)continue;
//            visited[nx][ny]=true;
//            q.push({nx,ny});
//        }
//    }
//}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i = 0 ; i <m;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        graph[a-1][b-1].push_back({c-1,d-1});
    }
    visited[0][0]=true;
    blink[0][0]=true;
   // bfs();
    dfs(0,0);
    int Sum=0;
    for (int i = 0 ; i < n;i++){
        for (int j = 0 ; j <n;j++){
            if (blink[i][j])Sum++;
        }
    }
    cout<<Sum<<'\n';
}
