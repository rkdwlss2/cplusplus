////
////  boj23289.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/23.
////
//
//#include <iostream>
//#include <cmath>
//#include <cstring>
//#include <vector>
//using namespace std;
//int n,m,k;
//
//struct robot{
//    int x;
//    int y;
//    int dir;
//};
//int cBoard[21][21];
//int board[21][21];
//int dx[4]={0,1,0,-1};
//int dy[4]={1,0,-1,0};
//int board2[21][21][8];
//int bx[8]={0,1,1,1,0,-1,-1,-1};
//int by[8]={1,1,0,-1,-1,-1,0,1};
//vector<pair<int,int>> v;
//vector<robot> robots;
//
//void blow(int sx,int sy,int dir,int num){
//    if (num==0)return;
//    board[sx][sy]+=num;
//    for (int i = -1 ;i<=1;i++){
//        int nx=sx+bx[(num+8+i)%8];
//        int ny=sy+by[(num+8+i)%8];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board2[sx][sy][dir]==1)continue;
//        if (i==-1||i==1){
//            int bx1=sx+bx[(num+8+2*i)%8];
//            int by1=sy+by[(num+8+2*i)%8];
//            if (board2[bx1][by1][dir]==1)continue;
//            
//        }
//        blow(nx,ny,dir,num-1);
//    }
//}
//int board3[21][21];
//void Changed(int sx,int sy){
//    for (int dir =0 ;dir<8;dir+=2){
//        if (board2[sx][sy][dir]==1)continue;
//        int nx=sx+bx[dir];
//        int ny=sy+by[dir];
//        int num2=board[nx][ny];
//        int num=board[sx][sy];
//        int proxy=abs(num2-num);
//        if (num>num2){
//            board3[sx][sy]-=proxy;
//        }else{
//            board3[sx][sy]+=proxy;
//        }
//    }
//}
//
//bool Check(){
//    for (auto a : v){
//        int i=a.first;
//        int j=a.second;
//        if (board[i][j]<k)return false;
//    }
//    return true;
//}
//int board4[21][21];
//void Minus(){
//    memset(board4,0,sizeof(board4));
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            for (int dir = 0;dir<8;dir+=2){
//                int nx=i+bx[dir];
//                int ny=j+by[dir];
//                if (board[nx][ny]==0){
//                    board4[i][j]--;
//                }
//            }
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ;j<m;j++){
//            board[i][j]+=board4[i][j];
//        }
//    }
//}
//void Print(){
//    for (int i=0; i < n;i++){
//        for (int j = 0 ;j<m;j++){
//            cout<<board[i][j]<<' ';
//        }cout<<'\n';
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>k;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            int tmp;
//            cin>>tmp;
//            if (tmp==5){
//                v.push_back({i,j});
//                cBoard[i][j]=1;
//            }else if (tmp>0){
//                if (tmp==1){
//                    robots.push_back({i,j,0});
//                }else if (tmp==2){
//                    robots.push_back({i,j,4});
//                }else if (tmp==3){
//                    robots.push_back({i,j,6});
//                }else if(tmp==4){
//                    robots.push_back({i,j,2});
//                }
//            }
//        }
//    }
//    int l;
//    cin>>l;
//    for (int i = 0 ; i < l;i++){
//        int a,b,c;
//        cin>>a>>b>>c;
//        if (c==0){
//            board2[a-1][b-1][6]=1;
//            board2[a-2][b-1][2]=1;
//        }else{
//            board2[a-1][b-1][0]=1;
//            board2[a-1][b][4]=1;
//        }
//    }
//    int idx=0;
//    while (true){
//        Print();
//        memset(board3,0,sizeof(board3));
//        memset(board4,0,sizeof(board4));
//        for (auto robot : robots){
//            int x=robot.x;
//            int y=robot.y;
//            int dir=robot.dir;
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            blow(nx,ny,dir,5);
//        }
//        for (int i = 0 ; i <n;i++){
//            for (int j = 0 ; j < m;j++){
//                Changed(i, j);
//            }
//        }
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j < m;j++){
//                board[i][j]+=board3[i][j];
//            }
//        }
//        Minus();
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j < m;j++){
//                board[i][j]+=board4[i][j];
//            }
//        }
//        idx++;
//        if (idx>100){
//            cout<<101<<'\n';
//            break;
//        }
//        if (Check()){
//            cout<<idx<<'\n';
//            break;
//        }
//        
//    }
//    
//    
//}
