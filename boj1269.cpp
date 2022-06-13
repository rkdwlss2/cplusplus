////
////  boj1269.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/05/29.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n,m;
//
//vector<int> arr1;
//vector<int> arr2;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i <n;i++){
//        int tmp;
//        cin>>tmp;
//        arr1.push_back(tmp);
//    }
//    for (int j = 0 ; j <m;j++){
//        int tmp2;
//        cin>>tmp2;
//        arr2.push_back(tmp2);
//    }
//    vector<int>::iterator iter;
//    vector<int> result1(arr1.size()+arr2.size());
//    sort(arr1.begin(),arr1.end());
//    sort(arr2.begin(),arr2.end());
//    iter = set_difference(arr1.begin(),arr1.end(),arr2.begin(), arr2.end(),result1.begin());
//    result1.erase(iter,result1.end());
//    
//    int sum1 = arr1.size()-result1.size();
//    
//    cout<< arr1.size()+arr2.size()-2*sum1<<'\n';
//    
//}
