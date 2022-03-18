////
////  boj1920.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/17.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n,m;
//vector<int> v;
//
//bool binarySearch(int num){
//    int start=0;
//    int end=n-1;
//    int mid=(start+end)/2;
//    while(start+1<end){
//        mid=(start+end)/2;
//        if (v[mid]<=num){
//            start=mid;
//        }else{
//            end=mid-1;
//        }
//    }
//    if (v[start]==num||v[end]==num)return true;
//    return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        int tmp;
//        cin>>tmp;
//        v.push_back(tmp);
//    }
//    sort(v.begin(),v.end());
//    cin>>m;
//    for (int i = 0 ; i <m;i++){
//        int tmp;
//        cin>>tmp;
//        cout<<binarySearch(tmp)<<'\n';
//    }
//}
