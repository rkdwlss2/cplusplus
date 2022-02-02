//
//  boj7579.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/02.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,m;
int memory[101];
int cash[101];
int cache[101][10001];

int go(int num,int sum){
    if (num==n)return 0;
    int& ret=cache[num][sum];
    if (ret!=-1)return ret;
    ret=go(num+1,sum);
    if (sum>=cash[num])ret=max(ret,memory[num]+go(num+1,sum-cash[num]));
    return ret;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(cache,-1,sizeof(cache));
    cin>>n>>m;
    for (int i = 0 ; i<n;i++){
        cin>>memory[i];
    }
    for (int i = 0 ;i<n;i++){
        cin>>cash[i];
    }
    int mem=0;
    while(1){
        if (go(0,mem)>=m){
            cout<<mem;
            break;
        }
        mem++;
    }
    
    
}
