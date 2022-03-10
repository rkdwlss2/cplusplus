////
////  boj7682.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/10.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int board[10][10];
//int tmpBoard[3][3];
//enum MARKS{
//    POINT,O,X
//};
//vector<pair<int,int>> v;
//int xSize,oSize;
//bool Check(int mode){
//    int answerSum=(mode==0)?3:15;
//    bool r=false,c=false,cross=false;
//    for (int i = 0 ; i <3;i++){
//        int rowSum=0;
//        int colSum=0;
//        for (int j = 0 ; j <3;j++){
//            rowSum+=tmpBoard[i][j];
//            colSum+=tmpBoard[j][i];
//        }
//        if (rowSum==answerSum)r=true;
//        if (colSum==answerSum)c=true;
//    }
//    int xSum1=tmpBoard[0][0]+tmpBoard[1][1]+tmpBoard[2][2];
//    int xSum2=tmpBoard[1][1]+tmpBoard[0][2]+tmpBoard[2][0];
//    if (xSum1==answerSum||xSum2==answerSum)cross=true;
//    if (r&&c&&cross)return true;
//    return false;
//}
//bool go(int num,int prev,int mode){
//    int Size=(mode==0)?xSize:oSize;
//    if (num==Size){
//        if (Check(mode))return true;
//        return false;
//    }
//    for (int i = prev+1;i<Size;i++){
//        int x=v[i].first;
//        int y=v[i].second;
//        tmpBoard[x][y]=(mode==0)?1:5;
//        bool ok=go(num+1,i,mode);
//        tmpBoard[x][y]=0;
//        if (ok)return ok;
//    }
//    return false;
//}
//
//void solve(int sx,int sy){
//    v.clear();
//    for (int i = 0 ; i<3;i++){
//        for (int j = 0 ; j<3;j++){
//            if (board[sx+i][sy+j]==0){
//                v.push_back({i,j});
//            }
//            tmpBoard[i][j]=board[sx+i][sy+j];
//        }
//    }
//    
//    if (v.size()%2==0){
//        xSize=v.size()/2;
//        oSize=xSize;
//    }else{
//        xSize=v.size()/2+1;
//        oSize=v.size()/2;
//    }
//
//    if (go(0,-1,0)||go(0,-1,1)){
//        cout<<"valid"<<'\n';
//        return;
//    }
//    cout<<"invalid"<<'\n';
//    
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    for (int i = 0 ; i <9;i++){
//        for (int j = 0 ; j < 9 ;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='O'){
//                board[i][j]=5;
//            }else if (tmp=='X'){
//                board[i][j]=1;
//            }
//        }
//    }
//    for (int i = 0 ; i < 9 ; i++){
//        int row = i/3;
//        int col = i%3;
//        row*=3;
//        col*=3;
//        solve(row,col);
//    }
//}
