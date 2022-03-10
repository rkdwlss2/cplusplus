////
////  boj2174.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/09.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//
//int board[101][101];
//pair<int,int> robot[101];
//int robotDir[101];
//int dx[4]={0,1,0,-1};
//int dy[4]={1,0,-1,0};
//
//enum Directions{
//    Eaet,South,West,North
//};
//enum operations{
//    FORWARD,ROLEFT,RORIGHT
//};
//
//void moveRotate(int num,int mode){
//    int& now = robotDir[num];
//    if (mode==0){
//        now=(now+4-1)%4;
//    }else{
//        now=(now+1)%4;
//    }
//}
//int moveForward(int num){
//    int x=robot[num].first;
//    int y=robot[num].second;
//    int dir=robotDir[num];
//    int nx=x+dx[dir];
//    int ny=y+dy[dir];
//    if (nx<0||nx>=n||ny<0||ny>=m){
//        return -1;
//    }
//    if (board[nx][ny]>0){
//        return board[nx][ny];
//    }
//    robot[num].first=nx;
//    robot[num].second=ny;
//    board[x][y]=0;
//    board[nx][ny]=num;
//    return 0;
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>m>>n;
//    int A,B;
//    cin>>A>>B;
//    for (int i = 1 ; i <=A;i++){
//        int x,y;
//        cin>>y>>x;
//        x=n-x;
//        y=y-1;
//        char tmp;
//        cin>>tmp;
//        if (tmp=='E'){
//            robotDir[i]=Eaet;
//        }else if (tmp=='W'){
//            robotDir[i]=West;
//        }else if (tmp=='S'){
//            robotDir[i]=South;
//        }else{
//            robotDir[i]=North;
//        }
//        robot[i]={x,y};
//        board[x][y]=i;
//    }
//    for (int i = 0 ; i <B;i++){
//        int idx;
//        cin>>idx;
//        char Oper;
//        cin>>Oper;
//        int num;
//        cin>>num;
//        for (int j = 0 ;j<num;j++){
//            if (Oper=='F'){
//                int forwardReturn = moveForward(idx);
//                if (forwardReturn==-1){
//                    cout<<"Robot "<<idx<<" crashes into the wall"<<'\n';
//                    return 0;
//                }else if (forwardReturn>=1){
//                    cout<<"Robot "<<idx<<" crashes into robot "<<forwardReturn<<'\n';
//                    return 0;
//                }
//            }else if(Oper=='L'){
//                moveRotate(idx,0);
//            }else{
//                moveRotate(idx,1);
//            }
//        }
//        
//    }
//    cout<<"OK"<<'\n';
//}
