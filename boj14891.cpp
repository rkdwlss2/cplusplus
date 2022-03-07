//
//  boj14891.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/03/07.
//

#include <iostream>
#include <queue>
using namespace std;
int dx[8]={0,0,1,2,2,2,1,0};
int dy[8]={1,2,2,2,1,0,0,0};

int board[4][3][3];

void rotate(int num,int mode){
    deque<int> dq;
    for (int i = 0 ; i < 8;i++){
        dq.push_back(board[num][dx[i]][dy[i]]);
    }
    if (mode==1){
        int now=dq.back();dq.pop_back();
        dq.push_front(now);
    }else{
        int now=dq.front();dq.pop_front();
        dq.push_back(now);
    }
    for (int i = 0 ; i <8;i++){
        board[num][dx[i]][dy[i]]=dq.front();dq.pop_front();
    }
}

void go(int num,int mode){
    int tmp[4];
    fill(tmp,tmp+4,0);
    int tNum=num;
    tmp[num]=mode;
    int dir=mode;
    while(tNum--){
        if (board[tNum][1][2]!=board[tNum+1][1][0]){
            tmp[tNum]=dir*(-1);
            dir*=(-1);
        }else{
            break;
        }
    }
    tNum=num;
    dir=mode;
    while(tNum<3){
        if (board[tNum][1][2]!=board[tNum+1][1][0]){
            tmp[tNum+1]=dir*(-1);
            dir*=(-1);
        }else{
            break;
        }
        tNum++;
    }
    for (int i = 0 ; i < 4;i++){
        if (tmp[i]==0)continue;
        rotate(i,tmp[i]);
    }
}

int getScore(){
    int Score=0;
    for (int i = 0 ; i <4;i++){
        if (board[i][0][1]==1){
            Score+=(1<<i);
        }
    }
    return Score;
}
void Print(){
    for (int i = 0 ; i < 3;i++){
        for (int j = 0 ;j <4;j++){
            for (int k = 0 ; k<3;k++){
                cout<<board[j][i][k]<<' ';
            }
        }
        cout<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0 ; i<4;i++){
        for (int j = 0 ; j <8;j++){
            char tmp;
            cin>>tmp;
            if (tmp=='1'){
                board[i][dx[j]][dy[j]]=1;
            }else{
                board[i][dx[j]][dy[j]]=0;
            }
           
        }
    }
    int k;
    cin>>k;
    //Print();
    while(k--){
        int a,b;
        cin>>a>>b;
        go(a-1,b);
        //Print();
    }
    
    cout<<getScore()<<'\n';
}
