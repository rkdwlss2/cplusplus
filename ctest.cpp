//
//  ctest.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/04/10.
//

#include <stdio.h>

// you can use includes, for example:
// #include <algorithm>
#include <unordered_map>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
unordered_map<int,int> um;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for (auto i : A){
        if (um.count(i)==0){
            um.insert({i,0});
        }
    }
    for (int i = 1 ;i<=1000000;i++){
        if (um.count(i)==0){
            return i;
        }
    }
}


int main(){
    int year,month,day;
    printf("당신의 생년월일은? ");
    scanf("%d%d%d",&year,&month,&day);
    printf("생년월일 %d %d %d",year,month,day);
}
