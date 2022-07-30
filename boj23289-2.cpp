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

int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};

bool isOn(int x,int y){
    return tBoard[x][y]>0;
}

void isUp(int x,int y,int dir){
    int bDir = (4+dir)%8;
    int bUpDir = (3+dir)%8;
    int bDownDir = (5+dir)%8;
    int bDirValue = tBoard[dx[bDir]][dy[bDir]];
    int bUpDirValue = tBoard[dx[bUpDir]][dy[bUpDir]];
    int bDownDirValue = tBoard[dx[bDownDir]][dy[bDownDir]];
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
    
    for (int i= 1 ; i<5;i++){
        for (int j = 0;j<m;j++){
//            prevUp = tBoard[
            if (tBoard[i][j]>0){
                
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
}
