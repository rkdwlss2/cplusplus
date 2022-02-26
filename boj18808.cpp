////
////  boj18808.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/24.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//int n,m,k;
//
//int board[41][41];
//pair<int,int> NM[101];
//int paper[101][11][11];
//
//void rotate(int num){
//    int tmpBoard[11][11];
//    memset(tmpBoard,0,sizeof(tmpBoard));
//    int N=NM[num].first;
//    int M=NM[num].second;
//    for (int i = 0 ; i < N;i++){
//        for (int j = 0 ; j <M;j++){
//            tmpBoard[j][N-i-1]=paper[num][i][j];
//        }
//    }
//    for (int i = 0 ; i<M;i++){
//        for (int j = 0 ; j <N;j++){
//            paper[num][i][j]=tmpBoard[i][j];
//        }
//    }
//    NM[num].first=M;
//    NM[num].second=N;
//}
//
//bool Check(int sx,int sy,int num){
//    int a=NM[num].first;
//    int b=NM[num].second;
//    for (int i = 0 ; i <a;i++){
//        for (int j = 0 ; j <b;j++){
//            if (paper[num][i][j]==1&&board[i+sx][j+sy]==1){
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//void paint(int sx,int sy,int num){
//    int a=NM[num].first;
//    int b=NM[num].second;
//    for (int i = 0;i<a;i++){
//        for (int j = 0 ; j <b;j++){
//            if (paper[num][i][j]==1){
//                board[i+sx][j+sy]=paper[num][i][j];
//            }
//        }
//    }
//}
//
//
//
//
//
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m>>k;
//    for (int c = 0 ; c < k;c++){
//        cin>>NM[c].first>>NM[c].second;
//        int a=NM[c].first;
//        int b=NM[c].second;
//        for (int i=0;i<a;i++){
//            for (int j = 0 ; j <b;j++){
//                cin>>paper[c][i][j];
//            }
//        }
//    }
//    for (int idx = 0 ; idx < k;idx++){
//        int cnt=4;
//        while(cnt--){
//            bool ok=false;
//            int a=NM[idx].first;
//            int b=NM[idx].second;
//            for (int i = 0 ; i < n-a+1;i++){
//                for (int j = 0 ; j < m-b+1;j++){
//                    if (Check(i,j,idx)){
//                        paint(i,j,idx);
//                        ok=true;
//                        break;
//                    }
//                }
//                if (ok)break;
//            }
//            if (ok)break;
//            rotate(idx);
//        }
//        
//    }
//    
//    int cnt=0;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            if (board[i][j]==1)cnt++;
//        }
//    }
////    for (int i = 0 ; i <n;i++){
////        for (int j = 0 ; j <m;j++){
////            cout<<board[i][j]<<' ';
////        }
////        cout<<'\n';
////    }
//    cout<<cnt<<'\n';
//}
