//
//  boj2302.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/03/09.
//
#include <iostream>
  
using namespace std;

#define lli long long int
int n,m;
bool vip[41];
lli cache[41];
lli dp(int num){
    if (num==n){
        return 1;
    }
    lli& ret= cache[num];
    if (ret!=-1)return ret;
    ret = 0;
    if (vip[num]){
        ret+=dp(num+1);
        return ret;
    }
    ret+=dp(num+1);
    if ((num+1<n)&&!vip[num+1]){
        ret+=dp(num+2);
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i = 0 ; i <m;i++){
        int tmp;
        cin>>tmp;
        vip[tmp-1]=true;
    }
    fill(cache,cache+41,-1);
    cout<<dp(0)<<'\n';
}
