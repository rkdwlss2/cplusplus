////
////  boj14503.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/15.
////
//
//#include <iostream>
//using namespace std;
//int n,m,r,c,d;
//int board[51][51];
//int dx[4]={-1,0,1,0};
//int dy[4]={0,1,0,-1};
//void clean(int x,int y){ //해당칸 청소
//    board[x][y]=2;
//}
//
//bool doA(int x,int y){
//    int direction=(d+3)%4;
//    int nx=x+dx[direction];
//    int ny=y+dy[direction];
//    if (nx<0||nx>=n||ny<0||ny>=m)return false;
//    if (board[nx][ny]==0){//왼쪽칸 비어있는지 확인
//        d=direction; //방향 변경
//        r=nx;//해당 방향으로 이동
//        c=ny;
//        return true; //방향 이동할수 있음 -> 1번부터 진행
//    }
//    return false;
//}
//
//int doD(int x,int y){
//    for (int dir=0;dir<4;dir++){
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board[nx][ny]==0)return true;
//    }
//    int bDirection=(d+2)%4;
//    int bx=x+dx[bDirection];
//    int by=y+dy[bDirection];
//    if (bx<0||bx>=n||by<0||by>=m)return false;
//    if (board[bx][by]==1)return false;
//    r=bx;
//    c=by;
//    return 2;
//}
//
//int getCount(){
//    int cnt=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j<m;j++){
//            if (board[i][j]==2)cnt++;
//        }
//    }
//    return cnt;
//}
//
//void solve(){
//    bool ok=false;
//    while(true){
//        cout<<r<<' '<<c<<' '<<d<<'\n';
//        for (int i=0;i<n;i++){
//            for (int j = 0 ; j <m;j++){
//                cout<<board[i][j]<<' ';
//            }
//            cout<<'\n';
//        }
//        if (!ok)clean(r,c);
//        if (!doD(r,c)){
//            break;
//        }
//        if (doA(r,c)){//a를 수행
//            ok=false;
//            continue;
//        }else{ //b를 수행
//            ok=true;
//            if (doD(r,c)==2){
//                continue;
//            }
//            int direction=(d+3)%4;
//            d=direction;
//            continue;
//        }
//    }
//    cout<<getCount()<<'\n';
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    cin>>r>>c>>d;
//    int cnt=0;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j  < m;j++){
//            cin>>board[i][j];
//            if (board[i][j]==1)cnt++;
//        }
//    }
//    if (cnt==n*m){
//        cout<<0<<'\n';
//        exit(0);
//    }
//    solve();
//    
//}
