////
////  test.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/07/03.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int board[501][501];
//
//int dx[4]={1,0,0,-1};
//int dy[4]={0,-1,1,0};
//
//vector<vector<int>> solution(int n, bool horizontal) {
//    vector<vector<int>> answer(n,vector <int>(n,0));
//    int x=0,y=0;
//    int ind=1;
//    bool direction = horizontal;
//    board[x][y]=ind;
//    for (int i = 1 ; i < n;i++){
//        int now = board[x][y];
//        int directionNum = 0;
//        if (direction){
//            y++;
//            now++;
//        }else{
//            x++;
//            now++;
//            directionNum+=2;
//        }
//        board[x][y]=now;
//        now++;
//        // 첫번째 움직임
//        for (int j = 0;j<i;j++){
//            x+=dx[directionNum];
//            y+=dy[directionNum];
//            board[x][y]=now;
//            now++;
//        }
//        directionNum++;
//        // 두번째 움직임
//        for (int j = 0 ; j <i;j++){
//            x+=dx[directionNum];
//            y+=dy[directionNum];
//            board[x][y]=now;
//            now++;
//        }
//        direction = 1 - direction;
//    }
//
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            answer[i][j]= board[i][j];
//        }
//    }
//
//    return answer;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    solution(4, true);
//    cout<<"hi"<<'\n';
//}
