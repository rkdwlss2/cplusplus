//
//  boj14499.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/17.
//

#include <iostream>
#include <queue>
using namespace std;

int dice[4][3];
int n,m,r,c,k;
int board[21][21];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};

void moveEastWest(int mode){
    deque<int> dq;
    for (int i = 0;i<3;i++){
        dq.push_back(dice[1][i]);
    }
    dq.push_back(dice[3][1]);
    if (mode==0){
        int tmp=dq.back();
        dq.pop_back();
        dq.push_front(tmp);
    }else{
        int tmp=dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }
    for (int i = 0;i<3;i++){
        dice[1][i]=dq.front();
        dq.pop_front();
    }
    dice[3][1]=dq.front();
}

void moveSouthNorth(int mode){
    deque<int> dq;
    for (int i = 0;i<4;i++){
        dq.push_back(dice[i][1]);
    }
    if (mode==0){
        int tmp=dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }else{
        int tmp=dq.back();
        dq.pop_back();
        dq.push_front(tmp);
    }
    for (int i = 0;i<4;i++){
        dice[i][1]=dq.front();
        dq.pop_front();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>r>>c>>k;
    for (int i = 0 ;i<n;i++){
        for (int j = 0 ; j <m;j++){
            cin>>board[i][j];
        }
    }
    for (int i = 0 ; i < k;i++){
        int order;
        cin>>order;
        int nx=r+dx[order-1];
        int ny=c+dy[order-1];
        if (nx<0||nx>=n||ny<0||ny>=m)continue;
        if (order==1){
            moveEastWest(0);
        }else if (order==2){
            moveEastWest(1);
        }else if (order==3){
            moveSouthNorth(0);
        }else{
            moveSouthNorth(1);
        }
        if (board[nx][ny]==0){
            board[nx][ny]=dice[3][1];
        }else{
            dice[3][1]=board[nx][ny];
            board[nx][ny]=0;
        }
        r=nx;
        c=ny;
        cout<<dice[1][1]<<'\n';
    }
}
