////
////  test2.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/07/03.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//int n,m;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//int board[101][101];
//
//int visited[101][101];
//
//int isLake(int x,int y){
//    for (int dir = 0 ; dir <4;dir++){
//        int nx = x + dx[dir];
//        int ny = y + dy[dir];
//        if (board[nx][ny]==1){
//            return false;
//        }
//    }
//    return true;
//}
//
//int bfs(int sx,int sy){
//    queue<pair<int,int>> q;
//    visited[sx][sy]=true;
//    q.push({sx,sy});
//    int num = 1;
//    while(!q.empty()){
//        auto now = q.front();
//        q.pop();
//        int x = now.first;
//        int y = now.second;
//        for (int dir = 0 ;dir<4;dir++){
//            int nx = x+dx[dir];
//            int ny = y + dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]>0||board[nx][ny]==1)continue;
//            if (nx==0||nx==n-1||ny==0||ny==m-1)return false;
//            visited[nx][ny]=visited[x][y]+1;
//            num++;
//            q.push({nx,ny});
//        }
//
//    }
//    return num;
//}
//
//vector<int> solution(int rows, int columns, vector<vector<int>> lands) {
//    vector<int> answer;
//    n =rows;
//    m=columns;
//    int Max=-1;
//    int Min=987654321;
//    for (int i = 0 ; i < lands.size();i++){
//        int x = lands[i][0]-1;
//        int y = lands[i][1]-1;
//        board[x][y]=1;
//    }
//    for (int i = 1; i<n-1;i++){
//        for (int j = 1; j <m-1;j++){
//            if (board[i][j]==1)continue;
//            memset(visited,0,sizeof(visited));
//            int num = bfs(i,j);
//            if (num == false)continue;
//            if (Max<num)Max=num;
//            if (Min>num)Min=num;
//        }
//    }
//    if (Min == 987654321) Min=-1;
//    answer.push_back(Min);
//    answer.push_back(Max);
//    return answer;
//}
//
//
//int main(){
//    solution(9, 7, {{2, 2}, {2, 3}, {2, 5}, {3, 2}, {3, 4}, {3, 5}, {3, 6}, {4, 3}, {4, 6}, {5, 2}, {5, 5}, {6, 2}, {6, 3}, {6, 4}, {6, 6}, {7, 2}, {7, 6}, {8, 3}, {8, 4}, {8, 5}});
//    
//}
