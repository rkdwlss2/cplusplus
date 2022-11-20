////
////  kakao6.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/09/24.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int N,M,K;
//int startX;
//int startY;
//int endX;
//int endY;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//vector<char> charDir = {'r','l','d','u'};
//int visited[51][51];
//vector<vector<char>> ans;
//void bfs(){
//    queue<pair<pair<int,int>,pair<int,vector<char>>>> q;
//    q.push({{startX,startY},{0,{}}});
//    visited[startX][startY]=1;
//    while(!q.empty()){
//        auto now = q.front();
//        q.pop();
//        int x = now.first.first;
//        int y = now.first.second;
//        int k = now.second.first;
//        vector<char> v = now.second.second;
//        for (int dir = 0 ;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||ny<0||nx>=N||ny>=M)continue;
//            if (visited[nx][ny]>1||k>=K)continue;
//            visited[nx][ny]++;
//            v.push_back(charDir[dir]);
//            if (nx==endX&&ny==endY){
//                cout<<1<<' ';
//            }
//            if (k==K&&nx==endX&&ny==endY){
//                ans.push_back(v);
//            }
//            q.push({{nx,ny},{k+1,v}});
//        }
//    }
//}
//
//string solution(int n, int m, int x, int y, int r, int c, int k) {
//    string answer = "";
//    N=n;
//    M=m;
//    startX=x-1;
//    startY=y-1;
//    endX=r-1;
//    endY=c-1;
//    K=k;
//    bfs();
//    vector<string> tmp;
//    for (auto i : ans){
//        string a="";
//        for (auto j : i){
//            a+=j;
//        }
//        tmp.push_back(a);
//    }
//    sort(tmp.begin(),tmp.end());
//    if (tmp.size()==0){
//        answer="impossible";
//    }else{
//        answer=tmp[0];
//    }
//    
//    
//    return answer;
//}
//
//int main(){
//    cout<<solution(2, 2, 1, 1, 2, 2, 2);
//}
