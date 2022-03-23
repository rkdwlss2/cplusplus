////
////  boj15686.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/22.
////
//
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n,m;
//vector<pair<int,int>> road;
//vector<pair<int,int>> houses;
//vector<int> v;
//int board[51][51];
//int visited[51][51];
//int tmpBoard[51][51];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int getDistance(int x,int y,int nx,int ny){
//    return abs(x-nx)+abs(y-ny);
//}
//
////int bfs(int sx,int sy){
////    memset(visited,0,sizeof(visited));
////    queue<pair<int,int>> q;
////    visited[sx][sy]=1;
////    q.push({sx,sy});
////    while(!q.empty()){
////        auto now=q.front();q.pop();
////        int x=now.first;
////        int y=now.second;
////        for (int dir=0;dir<4;dir++){
////            int nx=x+dx[dir];
////            int ny=y+dy[dir];
////            if (nx<0||nx>=n||ny<0||ny>=n)continue;
////            if (visited[nx][ny]>0)continue;
////            if (tmpBoard[nx][ny]==2){
////                return visited[x][y];
////            }
////            visited[nx][ny]=visited[x][y]+1;
////            q.push({nx,ny});
////        }
////    }
////
////    return 987654;
////}
//int MAX=987654321;
//void go(int num,int prev){
//    if (num==m){
//        int Sum=0;
//        
//        for (auto a : houses){
//            int i=a.first;
//            int j=a.second;
//            int small=98765432;
//            for (auto b : v){
//                int x=road[b].first;
//                int y=road[b].second;
//
//                int dis=getDistance(i, j, x, y);
//                if (small>dis)small=dis;
//            }
//            Sum+=small;
//            
//            
//        }
//
//        if (MAX>Sum)MAX=Sum;
//        return;
//    }
//    for (int i = prev+1;i<road.size();i++){
//        v.push_back(i);
//        go(num+1,i);
//        v.pop_back();
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0; i<n;i++){
//        for (int j = 0 ; j<n;j++){
//            int tmp;
//            cin>>tmp;
//            board[i][j]=tmp;
//            if (tmp==2){
//                road.push_back({i,j});
//            }else if (tmp==1){
//                houses.push_back({i,j});
//            }
//        }
//    }
//    
//    go(0,-1);
//    cout<<MAX<<'\n';
//}
