////
////  boj1405.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/08.
////
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//#define lli long long int
//const lli MAX=10000000000;
//int n;
//double pro[4];
//
//int board[32][32];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//double answer=0;
//
//
//void go(int x,int y,int num,int prev,double sum){
//    if (num==n){
//        answer+=sum;
//        return;
//    }
////    int ret=0;
//    for (int dir = 0 ;dir<4;dir++){
////        if (pro[dir]==0)continue;
//       // if ((prev+2)%4==dir)continue;
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (board[nx][ny]>0)continue;
//        board[nx][ny]=1;
//        go(nx,ny,num+1,dir,sum*pro[dir]);
//        
//        board[nx][ny]=0;
//    }
//    return;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<4;i++){
//        cin>>pro[i];
//        pro[i]*=0.01;
//    }
//
//    board[15][15]=1;
////    for (int dir=0;dir<4;dir++){
////        if (pro[dir]==0)continue;
//        go(15,15,0,0,1.0);
////    }
//    cout << setprecision(15);
//    cout<<answer<<'\n';
//    
//}
