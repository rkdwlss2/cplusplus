//
//  boj16967.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/04/17.
//

#include <iostream>
using namespace std;
int board[2002][2002];

int answer[2002][2002];

int main(){
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    for (int i = 0 ; i <h+x;i++){
        for (int j =0;j<w+y;j++){
            int tmp;
            cin>>tmp;
            board[i][j]=tmp;
            if (i<x||j<y){
                answer[i][j]=tmp;
            }
        }
    }
    for (int i =x;i<h+x;i++){
        for (int j = y;j<w+y;j++){
            answer[i][j]=board[i][j]-answer[i-x][j-y];
        }
    }
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            cout<<answer[i][j]<<' ';
        }cout<<'\n';
    }
}
