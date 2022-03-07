////
////  boj17780.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/06.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,k;
//int board[15][15];
//
//int dx[4]={0,1,0,-1};
//int dy[4]={1,0,-1,0};
//
//
//struct horseStruct{
//    int x;
//    int y;
//    int dir;
//};
//
//deque<pair<int,int>> horse[15][15];
//
//horseStruct locate[15];
//
//bool Check(){
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            if (horse[i][j].size()>=4){
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>board[i][j];
//        }
//    }
//    for (int i = 0 ; i < k;i++){
//        int x,y,dir;
//        cin>>x>>y>>dir;
//        if (dir == 1){
//            dir=0;
//        }else if (dir==4){
//            dir=1;
//        }
//        horse[x-1][y-1].push_back({dir,i});
//        locate[i]={x-1,y-1,dir};
//    }
//    
//    for (int i = 1 ; i <= 1000;i++){
//        for (int j = 0 ; j < k;j++){
//            for (int i = 0 ; i < n;i++){
//                for (int j = 0 ; j < n;j++){
//                    cout<<horse[i][j].size()<<' ';
//                }
//                cout<<'\n';
//            }
//            int x=locate[j].x;
//            int y=locate[j].y;
//            int& dir=locate[j].dir;
//            deque<pair<int,int>> tmp;
//            while(true){
//                auto now=horse[x][y].back();horse[x][y].pop_back();
//                int nowDir=now.first;
//                int nowNum=now.second;
//                if (nowNum==j){
//                    tmp.push_back({nowDir,nowNum});
//                    break;
//                }
//                tmp.push_back({nowDir,nowNum});
//            }
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            
//            if (nx<0||nx>=n||ny<0||ny>=n||board[nx][ny]==2){
//                int bDir=(dir+2)%4;
//                int bx=x+dx[bDir];
//                int by=y+dy[bDir];
//                dir=bDir;
//                if (bx<0||bx>=n||by<0||by>=n||board[bx][by]==2){
//                    while(!tmp.empty()){
//                        auto now=tmp.back();tmp.pop_back();
//                        horse[x][y].push_back(now);
//                    }
//                    continue;
//                }else{
//                    auto First=tmp.back();tmp.pop_back();
//                    horse[bx][by].push_back(First);
//                    locate[j].x=bx;
//                    locate[j].y=by;
//                    locate[j].dir=bDir;
//                    while(!tmp.empty()){
//                        auto now=tmp.back();tmp.pop_back();
//                        locate[now.second].x=bx;
//                        locate[now.second].y=by;
//                        horse[x][y].push_back(now);
//                    }
//                }
//                
//            }
//            else if (board[nx][ny]==0){
//                while(!tmp.empty()){
//                    auto now=tmp.back();tmp.pop_back();
//                    locate[now.second].x=nx;
//                    locate[now.second].y=ny;
//                    horse[nx][ny].push_back(now);
//                }
//            }else if (board[nx][ny]==1){
//                while(!tmp.empty()){
//                    auto now=tmp.front();tmp.pop_front();
//                    locate[now.second].x=nx;
//                    locate[now.second].y=ny;
//                    horse[nx][ny].push_front(now);
//                }
//            }
//        }
//        
//        if (!Check()){
//            cout<<i<<'\n';
//            return 0;
//        }
//    }
//    cout<<-1<<'\n';
//}
