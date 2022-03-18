////
////  boj17140.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/16.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//using namespace std;
//int n,m;
//int r,c,k;
//int board[101][101];
//
//
//
//
//void goRC(int mode){
//    int Index=(mode==0)?n:m;
//    int Col=(mode==0)?m:n;
//    vector<pair<int,int>> v[101];
//    for (int i = 0 ; i<Index;i++){
//        int tmp[101];
//        fill(tmp,tmp+101,0);
//        for (int j = 0;j<Col;j++){
//            int now=(mode==0)?board[i][j]:board[j][i];
//            tmp[now]++;
//        }
//        priority_queue<pair<int,int>> pq;
//        for (int k = 1 ; k <=100;k++){
//            if (tmp[k]>0){
//                int now=tmp[k];
//                pq.push({-now,-k});
//            }
//        }
//        while(!pq.empty()){
//            auto now = pq.top();pq.pop();
//            int num=-now.first;
//            int idx=-now.second;
//            v[i].push_back({idx,num});
//        }
//    }
//    memset(board,0,sizeof(board));
//    int Max=0;
//    for (int i = 0 ; i <Index;i++){
//        for (int j = 0 ; j<v[i].size();j++){
//            if (Max<v[i].size()&&v[i].size()<=50)Max=v[i].size();
//            if (j<50){
//                if (mode==0){
//                    board[i][2*j]=v[i][j].first;
//                    board[i][2*j+1]=v[i][j].second;
//                }else{
//                    board[2*j][i]=v[i][j].first;
//                    board[2*j+1][i]=v[i][j].second;
//                }
//            }
//        }
//    }
//    if (mode==0){
//        if(Max*2>m){
//            m=Max*2;
//        }
//
//    }else{
//        if(Max*2>n){
//        n=Max*2;
//        }
//    }
//
//}
//void print(){
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            cout<<board[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
//    cout<<'\n';
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    n=3;m=3;
//    cin>>r>>c>>k;
//    r--;c--;
//    for (int i = 0 ;i <3;i++){
//        for (int j = 0 ;j<3;j++){
//            cin>>board[i][j];
//        }
//    }
//    int time=0;
//    while(time<=100){
////        if (time==25){
////            print();
////        }
//
//        if (board[r][c]==k){
//            cout<<time<<'\n';
//            return 0;
//        }
//        if (n>=m){
//            goRC(0);
//        }else{
//            goRC(1);
//        }
//        time++;
//    }
//    cout<<-1<<'\n';
//}
