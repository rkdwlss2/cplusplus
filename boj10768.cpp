//
//  boj10768.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/14.
//

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if (n==2&&m==18){
        cout<<"Special"<<'\n';
    }else if (n==1||(n==2&&m<18)){
        cout<<"Before"<<'\n';
    }else{
        cout<<"After"<<'\n';
    }
}
