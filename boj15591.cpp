////
////  boj15591.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/28.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int n,q;
//vector<pair<int,int>> graph[5001];
//bool visited[5001];
//int answer[5001][5001];
//
//void bfs(int sNum){ //bfs를 사용하는 이유는 항상 mootube가 트리 구조라 생각함 그리고 한 정점에서 다른 정점으로 갈때
//    fill(visited,visited+5001,false); // 방문 배열 초기화
//    queue<pair<int,int>> q;
//    q.push({sNum,1000000001}); //처음에는 가장 큰값을 넣음
//    visited[sNum]=true;
//    while(!q.empty()){ //bfs를 돌림..
//        auto now = q.front();q.pop();
//        int num=now.first;
//        int cost=now.second;
//        for (auto next : graph[num]){
//            int nNum=next.first;
//            int nCost=next.second;
//            if (visited[nNum])continue;
//            visited[nNum]=true;
//            int costMin=min(cost,nCost); // min함수로 USADO의 최솟값 찾음
//            answer[sNum][nNum]=costMin; //answer 배열에 저장
//            q.push({nNum,costMin}); //그 다음을 q에 넣음
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>q;
//    for (int i = 0 ; i <n-1;i++){
//        int a,b,c;
//        cin>>a>>b>>c;
//        graph[a].push_back({b,c});
//        graph[b].push_back({a,c});
//    }
//    
//    for (int i =1;i<=n;i++){
//        bfs(i);
//    }
//    
//    for (int i=0;i<q;i++){
//        int k,v;
//        cin>>k>>v;
//        int ans=0;
//        for (int i = 1;i<=n;i++){ //v지점과 모든 지점을 찾아가며 cost보다 같거나 큰 경우이면 count늘려준다.
//            int cost=answer[v][i];
//            if (cost>=k)ans++;
//        }
//        cout<<ans<<'\n';
//    }
//    
//}
