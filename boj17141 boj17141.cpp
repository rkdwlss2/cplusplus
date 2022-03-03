////
////  boj17141 boj17141.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/01.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int n,k,ANSWER=9999999;
//int board[51][51];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//vector<pair<int,int>> q;
//queue<pair<int,int>> que;
//vector<pair<int,int>> viruses;
//vector<int> v;
//enum State{
//    EMPTY,WALL,VIRUS
//};
//int visited[51][51];
//void bfs(){
//    while(!que.empty()){
//        auto now = que.front();que.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (board[nx][ny]==WALL||visited[nx][ny]<=visited[x][y]+1)continue;
//            visited[nx][ny]=visited[x][y]+1;
//            que.push({nx,ny});
//        }
//    }
//}
//int Check(){
//    int MAX=-1;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            if (visited[i][j]==999999&&board[i][j]==EMPTY)return false;
//            if (board[i][j]!=WALL&&MAX<visited[i][j])MAX=visited[i][j];
//        }
//    }
//    return MAX;
//}
//
//void dfs(int index,int num){
//    if (num==k){
//        for (int i = 0 ; i <n;i++){
//            fill(visited[i],visited[i]+n,999999);
//        }
//        for (auto i  : q){
//            visited[i.first][i.second]=1;
//            que.push(i);
//        }
//        bfs();
////        for (int i = 0 ; i <n;i++){
////            for (int j = 0 ; j <n;j++){
////                cout<<visited[i][j]<<' ';
////            }cout<<'\n';
////        }
//        int ans=Check();
//        if (!ans)return;
//        if (ANSWER>ans)ANSWER=ans;
//        return;
//    }
//    for (int i = index+1 ; i <viruses.size();i++){
//        int x=viruses[i].first;
//        int y=viruses[i].second;
//        q.push_back({viruses[i].first,viruses[i].second});
//        dfs(i,num+1);
//        q.pop_back();
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    
//    
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>board[i][j];
//            if (board[i][j]==VIRUS){
//                viruses.push_back({i,j});
//            }
//        }
//    }
//    dfs(-1,0);
//    if (ANSWER==9999999){
//        cout<<-1<<'\n';
//        exit(0);
//    }
//    
//    cout<<ANSWER-1<<'\n';
//}
