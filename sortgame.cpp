////
////  sortgame.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/08/20.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//
//int bfs(const vector<int>& perm){
//    int n = perm.size();
//    
//    vector<int> sorted = perm;
//    sort(sorted.begin(),sorted.end());
//    queue<vector<int>> q;
//    map<vector<int>,int> distance;
//    
//    distance[perm] = 0;
//    q.push(perm);
//    while(!q.empty()){
//        vector<int> here =q.front();
//        q.pop();
//        if (here == sorted)return distance[here];
//        int cost = distance[here];
//        
//        for (int i = 0 ;i<n;++i){
//            for (int j=i+2;j<=n;++j){
//                reverse(here.begin()+i, here.begin()+j);
//                if (distance.count(here)==0){
//                    distance[here]=cost+1;
//                    q.push(here);
//                }
//                reverse(here.begin()+i, here.begin()+j);
//            }
//        }
//    }
//    return -1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        vector<int> arr;
//        for (int i = 0 ; i <n;i++){
//            int tmp;
//            cin>>tmp;
//            arr.push_back(tmp);
//            
//        }
//        cout<<bfs(arr)<<'\n';
//        
//    }
//}
