////
////  boj15684.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/23.
////
//
//#include <iostream>
//using namespace std;
//int n,m,k;
//pair<int,int> board[33][11];
//
//bool goDown(int x,int y,int num){
//    if (x==m+1){
//        if (num==y)return true;
//        return false;
//    }
//    if (y<n){
//        if (board[x][y].second==1){
//           return goDown(x+1,y+1,num);
//        }else if (board[x][y].first==1){
//           return goDown(x+1,y-1,num);
//        }
//    }
//    return goDown(x+1,y,num);
//}
//
//void go(int x,int y,int num,int maxNum){
//    if (x==m)return;
//    if (num==maxNum){
//        bool ok=true;
//        for (int i = 0;i<n;i++){
//            if (!goDown(x,i,i))ok=false;
//        }
//        if (ok){
//            for (int i = 0 ; i < m;i++){
//                for (int j =  0 ; j <n;j++){
//                    cout<<board[i][j].first<<board[i][j].second<<' ';
//                }
//                cout<<'\n';
//            }
//            cout<<num<<'\n';
//            exit(0);
//        }
//        return;
//    }
//    if (y+1==n){ //다음으로 넘어가기
//        go(x+1,0,num,maxNum);
////        if (board[x][y].second==0){
////            board[x][y].second=1;
////            board[x][y+1].first=1;
////            go(x+1,0,num+1,maxNum);
////            board[x][y].second=0;
////            board[x][y+1].first=0;
////        }
//    }else{
//        go(x,y+1,num,maxNum);
//        if (board[x][y].second==0){
//            board[x][y].second=1;
//            board[x][y+1].first=1;
//            go(x,y+1,num+1,maxNum);
//            board[x][y].second=0;
//            board[x][y+1].first=0;
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k>>m;
//    for (int i = 0 ; i < k;i++){
//        int a,b;
//        cin>>a>>b;
//        board[a-1][b-1].second=1;
//        board[a-1][b].first=1;
//    }
//    int idx=0;
//    while(true){
//        go(0,0,0,idx++);
//    }
//}
