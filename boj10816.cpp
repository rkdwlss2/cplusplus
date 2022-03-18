////
////  boj10816.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/17.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n;
//vector<int> v;
//
//int Lower_bound(int num){
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
//    if (v[start]==num){
//        return start;
//    }else if(v[end]==num){
//        return end;
//    }
//    return -1;
//}
//
//int Upper_bound(int num){
//    int start=0;
//    int end=n-1;
//    int mid=(start+end)/2;
//    while(start+1<end){
//        mid=(start+end)/2;
//        if (v[mid]<=num){
//            start=mid+1;
//        }else{
//            end=mid-1;
//        }
//    }
//    if (v[end]==num){
//        return end+1;
//    }else if(v[start]==num){
//        return start+1;
//    }
//    return -1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        int tmp;
//        cin>>tmp;
//        v.push_back(tmp);
//    }
//    sort(v.begin(),v.end());
//    int m;
//    cin>>m;
//    for (int i = 0 ; i < m;i++){
//        int tmp;
//        cin>>tmp;
//        int lb=Lower_bound(tmp);
//        if (lb==-1){
//            cout<<0<<'\n';
//            continue;
//        }
//        cout<<Upper_bound(tmp)-lb<<'\n';
//    }
//}
