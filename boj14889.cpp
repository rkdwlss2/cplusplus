////
////  boj14889.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/15.
////
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int n;
//int Sum=0;
//vector<int> v;
//
//int board[21][21];
//int ans=987654321;
//void go(int prev,int cnt){
//    if (cnt==n/2){
//        vector<int> v2;
//        for (int i = 0 ; i <n;i++){
//            bool ok=true;
//            for (int j : v){
//                if (i==j)ok=false;
//            }
//            if (ok)v2.push_back(i);
//        }
//        int tSum=0;
//        for (int i : v){
//            for (int j : v){
//                tSum+=board[i][j];
//            }
//        }
//        int tSum2=0;
//        for (int i : v2){
//            for (int j : v2){
//                tSum2+=board[i][j];
//            }
//        }
//        int gap=abs(tSum-tSum2);
//        if (ans>gap)ans=gap;
//        return;
//    }
//    for (int i = prev+1 ; i < n;i++){
//        v.push_back(i);
//        go(i,cnt+1);
//        v.pop_back();
//    }
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0  ; j <n;j++){
//            int tmp;
//            cin>>tmp;
//            board[i][j]=tmp;
//            Sum+=tmp;
//        }
//    }
//    go(-1,0);
//    cout<<ans<<'\n';
//}
