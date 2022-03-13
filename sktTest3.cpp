////
////  sktTest3.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/12.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstring>
//#define lli long long int
//using namespace std;
//const lli MAX=10000019;
//pair<lli,lli> board[251][251];
//lli n,m;
//lli cache[251][251][3][4];
//lli dp(lli x,lli y,lli check,int dir){
//    if (x>=n||y>=m)return 0;
//    if (x==n-1&&y==n-1){
//        if (check==1){
//            return 1;
//        }
//        return 0;
//    }
//    lli& ret=cache[x][y][check][dir];
//    if (ret!=-1)return ret;
//    ret=0;
//    if (x+1<n){
//        ret=(ret%MAX+dp(x+1,y,check,0)%MAX)%MAX;
//    }
//    if (y+1<m){
//        ret=(ret%MAX+dp(x,y+1,check,1)%MAX)%MAX;
//    }
//    if (check==0&&x+1<n&&y-1<m&&board[x][y].first==1){
//        ret=(ret%MAX+dp(x+1,y-1,1,2)%MAX)%MAX;
//    }
//    if (check==0&&x-1<n&&y+1<m&&board[x][y].second==1){
//        ret=(ret%MAX+dp(x-1,y+1,1,3)%MAX)%MAX;
//    }
//    return ret=ret%MAX;
//}
//
//
//
//
//int solution(int width, int height, vector<vector<int>> diagonals) {
//    int answer = 0;
//    n=height+1;
//    m=width+1;
//    for (int i = 0; i < diagonals.size();i++){
//        int a=diagonals[i][1]-1;
//        int b=diagonals[i][0]-1;
//        board[a][b+1].first=1;
//        board[a+1][b].second=1;
//    }
//    memset(cache,-1,sizeof(cache));
//    answer=dp(0,0,0,0)%MAX;
//    return answer;
//}
//
//int main(){
//    vector<vector<int>> v={{17,19}};
//    cout<<solution(51, 37, v);
//}
