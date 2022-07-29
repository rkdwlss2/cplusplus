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

int dx[4]={-1,0,1,-1};
int dy[4]={0,1,0,0};

void blow(int x,int y,int dir){
    tBoard[x][y]=5;
    int bDir = (2+dir)%4;
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
