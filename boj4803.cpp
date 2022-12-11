////
////  boj4803.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/11/20.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> v;
//int visited[501];
//
//int dfs(int x,int prev){
//    int ret = 1;
//    if (visited[x]==1){
//        return 0;
//    }
//    visited[x]=1;
//    for (int i = 0 ; i<v[x].size();i++){
//        int next = v[x][i];
//        if (prev!=next){
//            ret += dfs(next,x);
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    while(true){
//        int n,m;
//        cin>>n>>m;
//        for (int i = 0 ; i <m;i++){
//            int a,b;
//            cin>>a>>b;
//            v[a].push_back(b);
//            v[b].push_back(a);
//        }
//        int cnt = 0;
//        for (int i = 1 ; i <= n;i++){
//            if (visited[i]!=1){
//                if (dfs(i,-1)>0) cnt++;
//            }
//        }
//    }
//
//
//}
