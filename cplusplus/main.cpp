////
////  main.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/01/28.
////
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int board[9][9];
//int n,m;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//vector<pair<int,int>> v;
//
//bool visited[9][9];
//int ans=0;
//void bfs(int sx,int sy){ //bfs를 통해서 바이러스 전파
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    visited[sx][sy]=true;
//    while(!q.empty()){
//        auto now = q.front();
//        q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx = x+dx[dir];
//            int ny= y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]==true||board[nx][ny]==1)continue; // 벽이 또는 전파된 바이러스면 넘어감
//            visited[nx][ny]=true;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int getSum(){ //빈 공간의 갯수 찾기
//    int answer=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            if (board[i][j]==0&&!visited[i][j])answer++; // 전파된 바이러스가 아니고 board가 0이면 빈공간
//        }
//    }
//    return answer;
//}
//
//
////벽을 3개 선택하는 조합
//void go(int num,int prev){
//    if (num==3){ //기저 조건 (종료 케이스) 3개의 벽을 선택하면 종료
//        memset(visited,false,sizeof(visited)); // bfs를 돌려야 하기 때문에 visited배열을 초기화 시킨다. visited의 의미는 전파된 바이러스 라고 생각하면 됨
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ; j <m;j++){
//                if (!visited[i][j]&&board[i][j]==2){ //전파된 파이러스가 아니고, board가 2 즉 바이러스이면 bfs로 바이러스 전파 시켜야함
//                    bfs(i,j);
//                }
//            }
//        }
//        int tmpAnswer=getSum(); // 빈 공간을 찾음
//        if (ans<tmpAnswer)ans=tmpAnswer; // 빈공간의 갯수가 최대인 최댓값 찾기
//        return;
//    }
//    for (int nxt=prev+1;nxt<v.size();nxt++){
//        pair<int,int> now = v[nxt];
//        int x=now.first;
//        int y=now.second;
//        board[x][y]=1;
//        go(num+1,nxt);
//        board[x][y]=0;
//    }
//}
//
//
//int main(int argc, const char * argv[]) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <m;j++){
//            cin>>board[i][j];
//            if (board[i][j]==0){ //만약 빈공간이면 vector에 push_back()함.. (넣음)
//                v.push_back({i,j}); //벡터에 저장해서 조합할 예정
//            }
//        }
//    }
//    go(0,-1);
//    cout<<ans<<'\n';
//    return 0;
//}
