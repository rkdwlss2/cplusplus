////
////  boj5213.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/21.
////
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//int n;
//int ldx[3]={-1,1,0};
//int ldy[3]={0,0,-1};
//int rdx[3]={-1,0,1};
//int rdy[3]={0,1,0};
//int board[501][1020];
//int board2[501][1020];
//int visited[501][1020];
//vector<int> v;
//int getNum(int sx,int sy){
//    int ans=1;
//    if ((sx%2==1)&&(sy%2==0))ans--;
//    return sx*n-(sx-1)/2+sy/2+ans;
//}
//int mx=0,my=0;
//int Max=0;
//
//int dfs2(int sx,int sy,int num){
//    if (Max==board2[sx][sy]){
//        cout<<num+1<<'\n';
//        return 1;
//    }
//    else if (sx==n||sy==2*n||board[sx][sy]==0){
//        return 0;
//    }
//    int x=sx;
//    int y=sy;
//    for (int i = 0 ; i < 3;i++){
//        int nx=x+ldx[i];
//        int ny=y+ldy[i];
//        if (nx<0||nx>=n||ny<0||ny>=2*n)continue;
//        if (board[nx][ny]==0)continue;
//        if (visited[nx][ny])continue;
//        if (board[nx][ny]!=board[x][y])continue;
//        visited[nx][ny]=true;
//        visited[nx][ny-1]=true;
//        if (dfs2(nx,ny-1,num+1)==1){
//            v.push_back(board2[nx][ny-1]);
//            return 1;
//        }
//        visited[nx][ny]=false;
//        visited[nx][ny-1]=false;
//    }
//    for (int i = 0 ; i < 3;i++){
//        int nx=x+rdx[i];
//        int ny=y+1+rdy[i];
//        if (nx<0||nx>=n||ny<0||ny>=2*n)continue;
//        if (board[nx][ny]==0)continue;
//        if (visited[nx][ny])continue;
//        if (board[nx][ny]!=board[x][y+1])continue;
//        visited[nx][ny]=true;
//        visited[nx][ny+1]=true;
//        if (dfs2(nx,ny,num+1)==1){
//            v.push_back(board2[nx][ny]);
//            return 1;
//        }
//        visited[nx][ny]=false;
//        visited[nx][ny+1]=false;
//    }
//    return 0;
//}
//
//
//int dfs(int sx,int sy,int num){
//    if (board2[sx][sy]>=Max){
//        Max=board2[sx][sy];
//        mx=sx;
//        my=sy;
//    }
//    if (sx==n-1&&sy==2*n-2){
//        cout<<num+1<<'\n';
//        return 1;
//    }else if (sx==n||sy==n||board[sx][sy]==0){
//        return 0;
//    }
//    int x=sx;
//    int y=sy;
//    for (int i = 0 ; i < 3;i++){
//        int nx=x+ldx[i];
//        int ny=y+ldy[i];
//        if (nx<0||nx>=n||ny<0||ny>=n)continue;
//        if (board[nx][ny]==0)continue;
//        if (visited[nx][ny])continue;
//        if (board[nx][ny]!=board[x][y])continue;
//        visited[nx][ny]=true;
//        visited[nx][ny-1]=true;
//        if (dfs(nx,ny-1,num+1)==1){
//            v.push_back(board2[nx][ny-1]);
//            return 1;
//        }
//        visited[nx][ny]=false;
//        visited[nx][ny-1]=false;
//    }
//    for (int i = 0 ; i < 3;i++){
//        int nx=x+rdx[i];
//        int ny=y+1+rdy[i];
//        if (nx<0||nx>=n||ny<0||ny>=n)continue;
//        if (board[nx][ny]==0)continue;
//        if (visited[nx][ny])continue;
//        if (board[nx][ny]!=board[x][y+1])continue;
//        visited[nx][ny]=true;
//        visited[nx][ny+1]=true;
//        if (dfs(nx,ny,num+1)==1){
//            v.push_back(board2[nx][ny]);
//            return 1;
//        }
//        visited[nx][ny]=false;
//        visited[nx][ny+1]=false;
//    }
//    return 0;
//}
//void printNum(){
//    cout<<1<<' ';
//    for (int i =v.size()-1;i>=0;i--){
//        cout<<v[i]<<' ';
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    if (n==1){
//        cout<<1<<'\n';
//        cout<<1<<'\n';
//        exit(0);
//    }
//    int idx=0;
//    
//    for (int i = 0 ; i < n;i++){
//        
//        if (i%2==0){
//            for (int j = 0 ; j <2*n;j++){
//                cin>>board[i][j];
//                board2[i][j]=idx/2+1;
//                idx++;
//            }
//        }else{
//            for (int j = 0;j<2*(n-1);j++){
//                cin>>board[i][j+1];
//                board2[i][j]=idx/2+1;
//                idx++;
//            }
//        }
//       
//    }
//    
//    
//    visited[0][0]=true;
//    visited[0][1]=true;
//    if (dfs(0,0,0)==1){
//        printNum();
//    }else{
//        memset(visited, false, sizeof(visited));
//        visited[0][0]=true;
//        visited[0][1]=true;
//        dfs2(0,0,0);
//        printNum();
//    }
//}
