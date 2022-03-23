////
////  boj2295.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/18.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//int n;
//unordered_map<int, int> um;
//
//vector<int> v;
//vector<int> v2;
//bool ch[1001];
////bool Check(int num,int Sum){
////    for (int i = 0 ; i<v.size();i++){
////        if (Sum+v[i]==num){
////            if (um.count(num)>0)return true;
////        }
////    }
////    return false;
////}
////
//bool solve(int Sum){
//    int st=0;
//    int en=v.size()-1;
//    int mid=(st+en)/2;
//    while(st<=en){
//        mid=(st+en)/2;
//        if (v[mid]<Sum){
//            st=mid+1;
//        }else if(v[mid]>Sum){
//            en=mid-1;
//        }
//        else{
//            return true;
//        }
//    }
//    return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<n;i++){
//        int tmp;
//        cin>>tmp;
//        v2.push_back(tmp);
//    }
//    sort(v2.begin(),v2.end());
//    int Max=-1;
//    for (int i = 0 ; i <v2.size();i++){
//        for (int j = 0 ; j <v2.size();j++){
//            v.push_back(v2[i]+v2[j]);
//        }
//    }
//    sort(v.begin(),v.end());
//    for (int i = n-1 ; i>=0;i--){
//        for (int j = 0 ; j<n;j++){
//            if (solve(v2[i]-v2[j])){
//                cout<<v2[i]<<'\n';
//                return 0;
//            }
//        }
//    }
//    cout<<Max<<'\n';
//}
