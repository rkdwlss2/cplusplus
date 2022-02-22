////
////  boj13144.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/22.
////
//
//#include <iostream>
//using namespace std;
//int n;
//
//int arr[100001];
//int tree[4*100001];
//int init(int node,int start,int end,int left,int right){
//    if (start==end){
//        return tree[node]=arr[start];
//    }
//    if (start>right||end<left)return 0;
//    return init(2*node,start,(start+end)/2,left,right)+init(2*node+1,(start+end)/2+1,end,left,right);
//}
//
//int sum(int node,int start,int end,int left,int right){
//    if (start>right||end<left)return 0;
//    if (start<=left&&right<=end)return tree[node];
//    return sum(2*node,start,(start+end)/2,left,right)+sum(2*node+1,(start+end)/2+1,end,left,right);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 1;i<=n;i++){
//        cin>>arr[i];
//    }
//    init(1,1,n,)
//    
//}
