////
////  boj20056.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/04/05.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,m,k;
//
//struct ball{
//    int mass;
//    int speed;
//    int direction;
//};
//vector<ball> board[51][51];
//int dx[8]={-1,-1,0,1,1,1,0,-1};
//int dy[8]={0,1,1,1,0,-1,-1,-1};
//void move(){
//    vector<ball> board2[51][51];
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<n;j++){
//            for (auto b : board[i][j]){
//                int mass=b.mass;
//                int speed=b.speed;
//                int direction=b.direction;
//                int x=i;
//                int y=j;
//                for (int idx=0;idx<speed;idx++){
//                    int nx=x+dx[direction];
//                    int ny=y+dy[direction];
////                    if (nx<0||nx>=n||ny<0||ny>=n){
//                        nx=(n+nx)%n;
//                        ny=(n+ny)%n;
////                    }
//                    x=nx;
//                    y=ny;
//                }
//                board2[x][y].push_back({mass,speed,direction});
//            }
//        }
//    }
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <n;j++){
//            board[i][j].clear();
//            board[i][j]=board2[i][j];
//        }
//    }
//}
//
//void Make(){
//    for (int i = 0 ;i <n;i++){
//        for (int j =0;j<n;j++){
//            int massSum=0;
//            int speedSum=0;
//            bool odd=true;
//            bool even=true;
//            if (board[i][j].size()<=1)continue;
//            for (auto b : board[i][j]){
//                int mass=b.mass;
//                int speed=b.speed;
//                int direction=b.direction;
//                massSum+=mass;
//                speedSum+=speed;
//                if (direction%2==0){
//                    even=false;
//                }else{
//                    odd=false;
//                }
//            }
//            int nextSpeed=speedSum/board[i][j].size();
//            int nextMass=massSum/5;
//            if (nextMass==0){
//                board[i][j].clear();
//                continue;
//            }
//            if (odd||even){
//                board[i][j].clear();
//                for (int idx = 0 ;idx<7;idx+=2){
//                    board[i][j].push_back({nextMass,nextSpeed,idx});
//                }
//            }else{
//                board[i][j].clear();
//                for (int idx = 1 ;idx<=7;idx+=2){
//                    board[i][j].push_back({nextMass,nextSpeed,idx});
//                }
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>k;
//    for (int i = 0 ; i <m;i++){
//        int a,b,c,d,e;
//        cin>>a>>b>>c>>d>>e;
//        board[a-1][b-1].push_back({c,d,e});
//    }
//    int num=k;
//    while(num--){
//        move();
//        Make();
//    }
//    int answer=0;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<n;j++){
//            for (auto b : board[i][j]){
//                int mass=b.mass;
//                answer+=mass;
//            }
//        }
//    }
//    cout<<answer<<'\n';
//}
