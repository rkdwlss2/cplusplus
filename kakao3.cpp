////
////  kakao3.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/09/24.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//vector<int> prices;
//
//vector<int> percents= {10,20,30,40};
//
//vector<vector<int>> user;
//
//priority_queue<pair<int,int>> ans;
//
//void makeSale(int index,vector<int> v){
//    if (index==prices.size()){
////        if (v[0]==40&&v[1]==40&&v[2]==20&&v[3]==40){
////            cout<<'1'<<'\n';
////        }
//        int cnt = 0;
//        int tmpSum=0;
//        
//        for (auto userData : user){
//            int percent = userData[0];
//            int total = userData[1];
//            int i = 0;
//            int Sum=0;
//            for (auto now : v){
//                if (now >= percent){
//                    int tmp = ((prices[i]/100)*(100-now));
//                    Sum += tmp;
//                }
//                i++;
//            }
//            
//            if (Sum>=total){
//                cnt++;
//            }else{
//                tmpSum+=Sum;
//            }
//        }
//        ans.push({cnt,tmpSum});
//        return;
//    }
//    for (auto now : percents){
//        v.push_back(now);
//        makeSale(index+1,v);
//        v.pop_back();
//    }
//    
//}
//
//vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
//    vector<int> answer;
//    prices=emoticons;
//    user=users;
//    makeSale(0,{});
//    
//    pair<int,int> a = ans.top();
//    answer.push_back(a.first);
//    answer.push_back(a.second);
//    return answer;
//}
//int main(){
//    vector<int> answer = solution({{40, 2900}, {23, 10000}, {11, 5200}, {5, 5900}, {40, 3100}, {27, 9200}, {32, 6900}}, {1300, 1500, 1600, 4900});
//    cout<<answer[0]<<' '<<answer[1]<<'\n';
//}
