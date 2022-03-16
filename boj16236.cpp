////
////  boj16236.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/15.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int fx,fy,n;
//int fishSize=2;
//int eatNum=0;
//int board[21][21];
//bool visited[21][21];
//
//
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int bfs(int sx,int sy){
//    priority_queue<pair<int,pair<int,int>>> pq;
//    queue<pair<int,pair<int,int>>> q;
//    visited[sx][sy]=true;
//    q.push({1,{sx,sy}});
//    while(!q.empty()){
//        auto now = q.front(); q.pop();
//        int x=now.second.first;
//        int y=now.second.second;
//        int num=now.first;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (visited[nx][ny]==true||board[nx][ny]>fishSize)continue;
//            if (board[nx][ny]>0&&board[nx][ny]<fishSize){
//                pq.push({-(num+1),{-nx,-ny}});
//            }
//            visited[nx][ny]=true;
//            q.push({num+1,{nx,ny}});
//        }
//    }
//    if (pq.empty()){
//        return -1;
//    }else{
//        int nx=-pq.top().second.first;
//        int ny=-pq.top().second.second;
//        eatNum++;
//        board[nx][ny]=0;
//        int num=-pq.top().first;
//        fx=nx;
//        fy=ny;
//        return num-1;
//    }
//    
//}
//
//void print(){
//    cout<<fx<<' '<<fy<<'\n';
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            cout<<board[i][j]<<' ';
//        }cout<<'\n';
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        for (int j =0 ;j <n;j++){
//            int tmp;
//            cin>>tmp;
//            if (tmp<=6){
//                board[i][j]=tmp;
//            }
//            if (tmp==9){
//                fx=i;
//                fy=j;
//            }
//        }
//    }
//    int Time=0;
//    while(true){
////        print();
////        cout<<Time<<'\n';
//        memset(visited,false,sizeof(visited));
//        int now=bfs(fx,fy);
//        if (eatNum==fishSize){
//            fishSize++;
//            eatNum=0;
//        }
//        if (now==-1)break;
//        Time+=now;
//    }
//    cout<<Time<<'\n';
//    
//}
