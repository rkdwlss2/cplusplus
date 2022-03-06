////
////  boj14466.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/03.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int n,k,r;
//
//vector<int> graph[101][101];
//
//bool visited[101][101];
//
//int board[101][101];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//int bfs(int sx,int sy){
//    int cnt=0;
//    if (board[sx][sy]==1)cnt++;
//    queue<pair<int,int>> q;
//    visited[sx][sy]=true;
//    q.push({sx,sy});
//    while(!q.empty()){
//        auto now =q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir = 0 ; dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=n)continue;
//            if (visited[nx][ny])continue;
//            if (graph[x][y][dir]==1)continue;
//            visited[nx][ny]=true;
//            if (board[nx][ny]==1)cnt++;
//            q.push({nx,ny});
//        }
//    }
//    return cnt;
//}
//vector<int> ans;
//int answer=0;
//vector<int> vec;
//void go(int prev,int num){
//    if (num==2){
//        answer+=(vec[0]*vec[1]);
//    }
//    for (int i = prev+1 ; i < ans.size();i++){
//        vec.push_back(ans[i]);
//        go(i,num+1);
//        vec.pop_back();
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k>>r;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < n;j++){
//            for (int l=0;l<4;l++){
//                graph[i][j].push_back(0);
//            }
//        }
//    }
//    for (int i = 0 ; i < r;i++){
//        int a,b,c,d;
//        cin>>a>>b>>c>>d;
//        int State=-1;
//        int State2=-1;
//        if (a==c){
//            if (b>d){
//                State=1;
//                State2=0;
//            }else{
//                State=0;
//                State2=1;
//            }
//        }else{
//            if (a>c){
//                State=3;
//                State2=2;
//            }else{
//                State=2;
//                State2=3;
//            }
//        }
//        
//        graph[a-1][b-1][State]=1;
//        graph[c-1][d-1][State2]=1;
//    }
//    for (int i = 0 ; i < k ;i++){
//        int a,b;
//        cin>>a>>b;
//        board[a-1][b-1]=1;
//    }
//    
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < n ; j++){
//            if (visited[i][j])continue;
//            int tmp=bfs(i,j);
//            if (tmp!=0)answer+=(tmp*(n-tmp));
//        }
//    }
// //   go(-1,0);
//    cout<<answer<<'\n';
//    
//}
