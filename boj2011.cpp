////
////  boj2011.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/27.
////
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//int n;
//string Code;
//bool zero=true;
//int cache[5001];
//
//int go(int index){
//    if (index==n)return 1;
//    int& ret=cache[index];
//    if (ret!=-1)return ret;
//    ret=0;
//    char now=Code[index];
//    int next=Code[index+1]-'0';
//    bool ok=true;
//    if (index<n&&((now=='2'&&next<=6)||now=='1')){
//        ret+=go(index+2)%1000000;
//        ok=false;
//    }
//    if (ok&&now=='0'){
//        return 0;
//    }
//    return ret+=go(index+1)%1000000;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>Code;
//    n=Code.size();
//    memset(cache,-1,sizeof(cache));
//    int answer=go(0)%1000000;
//    cout<<answer<<'\n';
//    
//}
