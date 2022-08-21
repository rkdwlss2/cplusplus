////
////  tossTest.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/08/06.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> levels) {
//    int answer = 0;
//    double a = 0.00000000000;
//    double n = levels.size();
//    int endIndex=-1;
//    sort(levels.begin(),levels.end());
//    for (int i = n-1 ; i >= 0;i--){
//        double tmp = 1.000000000/n;
//        a+=tmp;
//        if (0.25000000<=a){
//            endIndex=i;
//            break;
//        }
//    }
//    if (endIndex==levels.size()-1||endIndex==-1){
//        return -1;
//    }
//    return levels[endIndex];
//}
//
//int main(){
//    vector<int> v;
//    for (int i = 1 ; i<=100;i++){
//        v.push_back(i);
//    }
//    cout<<solution(v);
//    
//}
