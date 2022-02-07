////
////  boj3109.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/07.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n,m;
//int board[10001][501];
//
//int dx[3]={-1,0,1}; //위 중간 아래로 이동
//int dy[3]={1,1,1};
//int answer=0;
//int go(int x,int y){ //backtracking방법으로.. 진행 ( dfs지만 가지치기 때문에 backtracking)
//    if (y==m-1){ //기저 조건 맨 우측으로 갔을때는 answer 에 1을 더해주고 최종 도달값으로 1 반환
//        answer++;
//        return 1;
//    }
//    int ret=0;
//    for (int dir = 0 ; dir<3;dir++){ //세 방향으로 진행
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board[nx][ny]>0)continue;
//        board[nx][ny]=2;
//        ret=max(ret,go(nx,ny));
//        if (ret==1){ //이미 지나갈수 없다면 종료.. (지우지 않은 이유는 어차피 지나갈수 없으면 다음에도 지나가지 못하게 한다.. 시간 초과의 이유
//            break;
//        }
//    }
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='x'){
//                board[i][j]=1;
//            }
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        go(i,0);
//        for (int j = 0 ; j <n;j++){
//            for (int k = 0 ; k<m;k++){
//                cout<<board[j][k]<<' ';
//            }cout<<'\n';
//        }
//    }
//    cout<<answer<<'\n';
//}
