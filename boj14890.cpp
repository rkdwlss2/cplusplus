////
////  boj14890.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/02.
////
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int n,k;
//
//int board[101][101];
//
//bool Check(int num,int mode){
//    vector<int> v;
//    pair<int,int> tmp[101];
//    int tmpNum[101];
//    fill(tmpNum,tmpNum+101,0);
//    if (mode==0){
//        for (int i = 0 ; i < n;i++){
//            v.push_back(board[num][i]);
//        }
//    }else{
//        for (int i = 0 ; i < n;i++){
//            v.push_back(board[i][num]);
//        }
//    }
//    
//    for (int i = 0 ; i <n;i++){
//        int now=v[i];
//        if (i<n-1){
//            int next=v[i+1];
//            int gap=now-next;
//            if (gap==1){
//                tmp[i].second=1;
//            }else if (gap>=2){
//                return false;
//            }
//        }
//        if (i>0){
//            int prev=v[i-1];
//            int gap=now-prev;
//            if (gap==1){
//                tmp[i].first=1;
//            }
//            else if (gap>=2){
//                return false;
//            }
//        }
//    }
//    for (int i = 0 ;i<n-1;i++){
//        
//        if (tmp[i].second==1&&(i+k)<n){
//            int now=v[i+1];
//            for (int j = 1 ; j <=k;j++){
//                int next=v[i+j];
//                tmpNum[i+j]++;
//                if (now!=next)return false;
//            }
//        }else if (tmp[i].second==1&&(i+k)>=n){
//            return false;
//        }
//    }
//    for (int i = 1;i<n;i++){
//       
//        if (tmp[i].first==1&&(i-k)>=0){
//            int now=v[i-1];
//            for (int j = 1 ; j<=k;j++){
//                int next=v[i-j];
//                tmpNum[i-j]++;
//                if (now!=next)return false;
//            }
//        }else if (tmp[i].first==1&&(i-k)<0){
//            return false;
//        }
//    }
//    for (int i = 0 ; i <n;i++){
//        if (tmpNum[i]>=2)return false;
//    }
//    return true;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < n;j++){
//            cin>>board[i][j];
//        }
//    }
//    int Sum=0;
//    for (int i = 0 ; i < n;i++){
//        if (Check(i, 0))Sum++;
//        if (Check(i,1))Sum++;
//    }
//    cout<<Sum<<'\n';
//    
//}
