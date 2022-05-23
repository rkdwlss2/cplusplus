//
//  boj2525.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/05/23.
//

#include <iostream>

using namespace std;

int main(){
    int h,m,plus;
    cin>>h>>m>>plus;
    int plusH = (m+plus)/60;
    int disM = (m+plus)%60;
    int disH = (h+plusH)%24;
    cout<<disH<<' '<<disM<<'\n';
}
