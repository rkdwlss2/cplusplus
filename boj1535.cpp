////
////  boj1535.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/13.
////
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int n;
//int arr[21];
//int health[21];
//int cache[21][101];
//
//
//int dp(int index,int sum){
//    if (index==n){
//        return 0;
//    }
//    int &ret =cache[index][sum];
//    if (ret!=-1)return ret;
//    ret=0;
//    if (sum+arr[index]<100){
//        ret=max(ret,dp(index+1,sum+arr[index])+health[index]);
//    }
//    ret=max(ret,dp(index+1,sum));
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        cin>>arr[i];
//        
//    }
//    for (int i  = 0 ; i < n;i++){
//        cin>>health[i];
//    }
//    memset(cache,-1,sizeof(cache));
//    cout<<dp(0,0)<<'\n';
//}
