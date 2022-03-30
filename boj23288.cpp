////
////  boj23288.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/29.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n,m;
//int board[21][21];
//int dx[4]={-1,0,1,0};
//int dy[4]={0,1,0,-1};
//
//int dice[6][4]={
//    {0,2,0},
//    {4,1,3},
//    {0,5,0},
//    {0,6,0}
//};
//
//void move(int mode){
//    if (mode==0){
//        int tmp=dice[0][1];
//        for (int i = 0 ; i <3;i++){
//            dice[i][1]=dice[i+1][1];
//        }
//        dice[3][1]=tmp;
//    }else if (mode==1){
//        int tmp=dice[3][1];
//        int tmp2=dice[1][2];
//        for (int i = 2 ; i>=0;i--){
//            dice[1][i]=dice[1][i-1];
//        }
//        dice[1][0]=tmp;
//        dice[3][1]=tmp2;
//    }else if (mode==2){
//        int tmp=dice[3][1];
//        for (int i = 3 ; i >=0;i--){
//            dice[i][1]=dice[i-1][1];
//        }
//        dice[0][1]=tmp;
//    }else if (mode==3){
//        int tmp=dice[3][1];
//        int tmp2=dice[1][0];
//        for (int i = 0;i<2;i++){
//            dice[1][i]=dice[1][i+1];
//        }
//        dice[1][2]=tmp;
//        dice[3][1]=tmp2;
//    }
//    
//}
//int visited[21][21];
//int bfs(int sx,int sy){
//    memset(visited,0,sizeof(visited));
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=1;
//    int num=board[sx][sy];
//    int idx=0;
//    while(!q.empty()){
//        auto now=q.front();
//        q.pop();
//        int x=now.first;
//        int y=now.second;
//        idx++;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]>0||board[nx][ny]!=num)continue;
//            visited[nx][ny]=visited[x][y]+1;
//            q.push({nx,ny});
//        }
//    }
//    return idx;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int k;
//    cin>>n>>m>>k;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>board[i][j];
//        }
//    }
//    int x=0;
//    int y=0;
//    int dir=1;
//    int SUM=0;
//    while (k--){
//       
////
////        for (int i = 0 ;i<4;i++){
////            for (int j = 0 ; j <3;j++){
////                cout<<dice[i][j]<<' ';
////            }cout<<'\n';
////        }cout<<'\n';
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m){
//            dir=(dir+2)%4;
//            nx=x+dx[dir];
//            ny=y+dy[dir];
//        }
//        move(dir);
//        int num=bfs(nx,ny);
//        SUM+=(num*board[nx][ny]);
//        int A=dice[3][1];
//        int B=board[nx][ny];
//        if (A>B){
//            dir=(dir+1)%4;
//        }else if (A<B){
//            dir=(dir+4-1)%4;
//        }
//        x=nx;
//        y=ny;
//    }
//    cout<<SUM<<'\n';
//}
