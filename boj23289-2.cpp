//
//  boj23289-2.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/07/29.
//

#include <iostream>
using namespace std;
int n,m;
int board[21][21];

int tBoard[21][21];

int wall[21][21];

int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};

bool isOn(int x,int y){
    return tBoard[x][y]>0;
}

void isUp(int x,int y,int dir){
    int bDir = (4+dir)%8;
    int bUpDir = (3+dir)%8;
    int bDownDir = (5+dir)%8;
    int bDirValue = tBoard[x+dx[bDir]][y+dy[bDir]];
    int bUpDirValue = tBoard[x+dx[bUpDir]][y+dy[bUpDir]];
    int bDownDirValue = tBoard[x+dx[bDownDir]][y+dy[bDownDir]];
    if (bDirValue>0){
        tBoard[x][y]=bDirValue-1;
    }
    else if(bUpDirValue>0){
        tBoard[x][y]=bUpDirValue-1;
    }
    else if(bDownDirValue>0){
        tBoard[x][y]=bDownDirValue-1;
    }
}

void blow(int x,int y,int dir){
    tBoard[x][y]=5;
    for (int j=y;j<y+5&&y<m;j++){
        for (int i=0;i<n;i++){
            isUp(i,j,dir);
        }
    }
}


// bit 연산으로 풀어야 할것 같은 느낌적인 느낌
void makeWall(int x,int y,int dir){
    
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    n=6,m=9;
    blow(4,1,2);
    cout<<"hi"<<'\n';
}
