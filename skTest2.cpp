////
////  skTest2.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/12.
////
//
//
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int N;
//int board[1001][1001];
//int dx[4]={1,0,-1,0};
//int dy[4]={0,-1,0,1};
//int start[2][4]={
//    {0,1,2,3},{3,0,1,2}
//};
//
//
//void print(){
//    for (int i = 0; i<N;i++){
//        for (int j = 0 ; j <N;j++){
//            cout<<board[i][j]<<' ';
//        }cout<<'\n';
//    }
//}
//
//vector<vector<int>> solution(int n, bool clockwise) {
//    N=n;
//    pair<int,int> location[2][4]={
//        {{-1,0},{0,N},{N,N-1},{N-1,-1}},
//        {{0,-1},{-1,N-1},{N-1,N},{N,0}}
//    };
//    vector<vector<int>> answer(n, vector<int>(n));
//    int a=(!clockwise)?0:1;
//        for (int lo=0;lo<4;lo++){
//            int x=location[a][lo].first;
//            int y=location[a][lo].second;
//            int direction=start[a][lo];
//            int num=1;
//            for (int i = n-1;i>=1;i-=2){
//                for (int j = 0 ; j < i ; j++){
//                    int nx=x+dx[direction];
//                    int ny=y+dy[direction];
//                    board[nx][ny]=num++;
//                    x=nx;
//                    y=ny;
//                }
//                if (a==0)direction=(direction+4-1)%4;
//                else{
//                    direction=(direction+1)%4;
//                }
//            }
//            if (n%2==1){
//                board[n/2][n/2]=num;
//            }
//        }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            answer[i][j]=board[i][j];
//        }
//    }
////    print();
//    return answer;
//}
//
//int main(){
//    solution(5,true);
//}
