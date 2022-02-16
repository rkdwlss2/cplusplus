//
//  boj2931.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/16.
//

#include <iostream>
#include <cmath>
using namespace std;
int n, m;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int arr[7]={5,10,15,6,4,9,12};
char ansChar[7]={'|','-','+','1','2','3','4'};

int board[26][26];
int sx,sy,ex,ey;

int getD(int x,int y){
    for (int i =  0 ; i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if (nx<0||nx>=n||ny<0||ny>=m)continue;
        if (board[nx][ny]>0){
            return i;
        }
    }
    return -1;
}

int getDirection(int x,int y,int direction){
    if ((board[x][y]>2)&&(board[x][y]%5==0)){
        return direction;
    }else if (board[x][y]==1){
        return direction;
    }
    
    else if (board[x][y]==0){
        return -1;
    }
    
    int bDir=(direction+2)%4;
    int num = board[x][y]-(1<<bDir);
    for (int i = 0 ; i<4;i++){
        if (num==(1<<i)){
            return i;
        }
    }
//    for (int dir = 0 ; dir<4;dir++){
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (nx<0||nx>=n||ny<0||ny>=m)continue;
//        if (board[nx][ny]<=2)continue;
//        if (board[nx][ny]%5==0){
//            return dir;
//        }else{
//            int bDir=(dir+2)%4;
//            int num = board[nx][ny]-(1<<bDir);
//            for (int i = 0 ; i<4;i++){
//                if (num==(1<<i)){
//                    return i;
//                }
//            }
//        }
//    }
    return -1;
}

void getAnswer(int x,int y){
    int ans=0;
    for (int dir=0;dir<4;dir++){
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if (nx<0||nx>=n||ny<0||ny>=m)continue;
        int bDir=(dir+2)%4;
        if (board[nx][ny]==1||board[nx][ny]==2)continue;
        if ((board[nx][ny]&(1<<bDir)))ans+=(1<<dir);
    }
    for (int i = 0 ; i<7;i++){
        if (arr[i]==ans){
            cout<<x+1<<' '<<y+1<<' '<<ansChar[i];
            exit(0);
        }
    }
    
}

void go(int x,int y,int direction){
    int nextDirection=getDirection(x,y,direction);
    
    int nx=x+dx[nextDirection];
    int ny=y+dy[nextDirection];
    if ((x==sx&&y==sy)||(y==ey&&x==ey)){
        nx=x+dx[direction];
        ny=y+dy[direction];
    }
    
    if (nextDirection==-1){
        getAnswer(x, y);
    }
    go(nx,ny,nextDirection);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i = 0 ; i <  n;i++){
        for (int j = 0  ; j <m;j++){
            char tmp;
            cin>>tmp;
            if (tmp=='M'){
                sx=i;
                sy=j;
                board[i][j]=1;
            }else if (tmp=='Z'){
                ex=i;
                ey=j;
                board[i][j]=2;
            }else if (tmp=='|'){
                board[i][j]=5;
            }else if (tmp=='-'){
                board[i][j]=10;
            }else if (tmp=='+'){
                board[i][j]=15;
            }else if (tmp=='1'){
                board[i][j]=6;
            }else if (tmp=='2'){
                board[i][j]=3;
            }else if (tmp=='3'){
                board[i][j]=9;
            }else if (tmp=='4'){
                board[i][j]=12;
            }
        }
    }
    if (getD(sx,sy)==-1&&getD(ex,ey)==-1){
        if (sx==ex){
            cout<<sx<<' '<<min(sy,ey)+1<<' '<<'-'<<'\n';
            exit(0);
        }else{
            cout<<min(sx,ex)+1<<' '<<sy<<' '<<'|'<<'\n';
            exit(0);
        }
        
    }
    if (getD(sx,sy)==-1){
        go(ex,ey,getD(ex,ey));
    }else{
        go(sx,sy,getD(sx,sy));
    }
    
    
    
}
