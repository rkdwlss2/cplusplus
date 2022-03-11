//
//  boj2536.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/03/11.
//

#include <iostream>
#include <vector>
using namespace std;
int n,m;

int k;

struct road{
    int x;
    int y;
    int toX;
    int toY;
};


vector<int> grpah[5001];
vector<road> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    cin>>k;
    for (int i = 0 ; i <k;i++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        v.push_back({b,c,d,e});
    }
    for (int i = 0 ;i<k;i++){
        for (int j = 0 ; j <k;j++){
            if (i==j)continue;
            int x,y,x1,y1;
            x=v[i].x;
            y=v[i].y;
            x1=v[i].toX;
            y1=v[i].toY;
            
            int x2,y2,x3,y3;
            x2=v[j].x;
            y2=v[j].y;
            x3=v[j].toX;
            y3=v[j].toY;
            
//            if (x==x1&&x1==x2&&x2==x3&&)
        }
    }
}
