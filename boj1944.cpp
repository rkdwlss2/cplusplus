////
////  boj1944.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/14.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n,m,startX,startY;
//
//int board[51][51];
//int visited[252][51][51];
//
//int board2[51][51];
//bool Check[251];
//pair<int,int> tmpQ[251];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//bool Ok=false;
//int bfs(int sx,int sy,int num){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[num][sx][sy]=1;
//    while(!q.empty()){
//        auto now = q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (board[nx][ny]==1||visited[num][nx][ny]>0)continue;
//            visited[num][nx][ny]=visited[num][x][y]+1;
//            if (board[nx][ny]==2||board[nx][ny]==3){
//                if (board[nx][ny]==2)Ok=true;
//                else{
//                    for (int i = 0 ; i <m;i++){
//                        if (nx==tmpQ[i].first&&ny==tmpQ[i].second){
//                            Check[i]=true;
//                        }
//                    }
//                }
//                return visited[num][nx][ny]-1;
//            }
//            q.push({nx,ny});
//        }
//    }
//    return -1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    int index=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < n;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='1'){
//                board[i][j]=1;
//            }else if (tmp=='S'){
//                board[i][j]=2;
//                startX=i;
//                startY=j;
//            }else if (tmp=='K'){
//                board[i][j]=3;
//                tmpQ[index]={i,j};
//                index++;
//            }
//        }
//    }
//    int sum=0;
//    for (int i = 0 ; i <m;i++){
//        if (Check[i]==true)continue;
//        Check[i]=true;
//        int x=tmpQ[i].first;
//        int y=tmpQ[i].second;
//        int tmp=bfs(x,y,i);
//        if (tmp==-1){
//            cout<<-1<<'\n';
//            return 0;
//        }
//        sum+=tmp;
//    }
//   // cout<<Ok<<'\n';
//    if (!Ok){
//        int x=startX;
//        int y=startY;
//        int tmp=bfs(x,y,m);
//        if (tmp==-1){
//            cout<<-1<<'\n';
//            return 0;
//        }
//        sum+=tmp;
//    }
//    for (int k = 0 ; k <=m;k++){
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j  <n;j++){
//                if (visited[k][i][j]>0){
//                    board2[i][j]=1;
//                }
//            }
//        }
//    }
//    for (int k = 0 ; k <m;k++){
//        
//        int x=tmpQ[k].first;
//        int y=tmpQ[k].second;
//        if (board2[x][y]!=1){
//            cout<<-1<<'\n';
//            return 0;
//        }
//    }
//    if (board2[startX][startY]!=1){
//        cout<<-1<<'\n';
//        return 0;
//    }
//    
//    cout<<sum<<'\n';
//    
//    
//}
