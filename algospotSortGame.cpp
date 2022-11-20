////
////  algospotSortGame.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/08/21.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//map<vector<int>,int> m;
//
//void bfs(int n){
//    vector<int> arr;
//    for (int i = 0;i<n;i++){
//        arr.push_back(i);
//    }
//    m[arr] = 0;
//    queue<vector<int>> q;
//    q.push(arr);
//    while(!q.empty()){
//        auto now = q.front();
//        q.pop();
//        vector<int> prev = now;
//        for (int i = 0 ; i <n;i++){
//            for (int j = i+2 ; j<=n;j++){
//                reverse(now.begin()+i, now.begin()+j);
//                if (m.count(now)==0){
//                    m[now]=m[prev]+1;
//                    q.push(now);
//                }
//                reverse(now.begin()+i, now.begin()+j);
//            }
//        }
//    }
//}
//
//int solve(const vector<int>& perm){
//    int n = perm.size();
//    vector<int> fixed(n);
//    for (int i = 0 ; i<n;i++){
//        int smaller = 0;
//        for (int j = 0 ;j<n;j++){
//            if (perm[j]<perm[i])
//                smaller++;
//            fixed[i] = smaller;
//        }
//    }
//    return m[fixed];
//}
//
//
//
//int main(){
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        vector<int> arr;
//        bfs(n);
//        while(n--){
//            int tmp;
//            cin>>tmp;
//            arr.push_back(tmp);
//        }
//        cout<<solve(arr)<<'\n';
//    }
//}
