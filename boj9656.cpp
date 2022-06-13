//
//  boj9656.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/06/13.
//

#include <iostream>
using namespace std;

int dp[1002];
int main(){
    int n;
    cin>>n;
    dp[0]=false;
    dp[1]=true;
    dp[2]=false;
    for (int i = 4 ; i<=n;i++){
        if (!(dp[i-1]&&dp[i-3]))dp[i]=true;
        else dp[i]=false;
    }
    if (dp[n])cout<<"SK"<<'\n';
    else cout<<"CY"<<'\n';
}
