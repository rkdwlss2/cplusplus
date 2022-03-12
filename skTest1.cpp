//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//int moneys[6]={1,5,10,50,100,500};
//vector<pair<double,int>> v;
//priority_queue<pair<int,int>> pq;
//
//int solution(int money, vector<int> costs) {
//    int answer = 0;
//    for (int i = 0 ; i<costs.size();i++){
//        v.push_back({(double)((double)moneys[i]/(double)costs[i]),i});
//    }
//    sort(v.begin(),v.end());
//    reverse(v.begin(),v.end());
//    for (int i = 0; i< v.size();i++){
//        if (money==0)break;
//        int index=v[i].second;
//        int mon=moneys[index];
//        int cost=costs[index];
//        for (int j =1000000;j>=1;j--){
//            if (j*mon<=money){
//                money-=(j*mon);
//                answer+=(j*cost);
//                break;
//            }
//        }
//    }
//    return answer;
//}
//
//int main(){
//    vector<int> test={1, 4, 99, 35, 50, 1000};
//    int money=4578;
//    cout<<solution(money, test);
//}
