////
////  kakao1.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/09/24.
////
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int term[27];
//
//vector<int> arr;
//
//int stringTodate(string date){
//    int year = stoi(date.substr(0,4))-2000;
//    int month = stoi(date.substr(5,7));
//    int day = stoi(date.substr(8,10));
//    month+=(year*12);
//    day+=(28*month);
//    return day;
//}
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    vector<int> answer;
//    for (auto str : terms){
//        int tmp = str[0]-'A';
//        string rest = str.erase(0,2);
//        term[tmp]=stoi(rest);
//    }
//    for (auto str : privacies){
//        int index = str[11]-'A';
//        string date = str.erase(10,2);
//        int day = stringTodate(date)+term[index]*28;
//        arr.push_back(day);
//    }
//    
//    int todayDate = stringTodate(today);
//    int index=1;
//    for (auto tmpDate : arr){
//        if (tmpDate<=todayDate){
//            answer.push_back(index);
//        }
//        index++;
//    }
//
//    return answer;
//}
//
//int main(){
//    vector<int> answer = solution("2020.01.01", {"Z 3", "D 5"}, {"2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z"});
//    for (auto i : answer){
//        cout<<i<<' ';
//    }
//}
