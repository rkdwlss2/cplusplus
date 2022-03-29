////
////  boj16916.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/25.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> getPartialMatchNaive(const string& N){
//    int m=N.size();
//    vector<int> pi(m,0);
//    for (int begin=1;begin<m;begin++){
//        for (int i = 0 ;i+begin<m;i++){
//            if (N[begin+i]!=N[i])break;
//            pi[begin+i]=max(pi[begin+i],i+1);
//        }
//    }
//    return pi;
//}
//
//vector<int> getPartialMatch(const string& N){
//    int m=N.size();
//    vector<int> pi(m,0);
//    int begin=1,matched=0;
//    while(begin+matched<m){
//        if (N[begin+matched]==N[matched]){
//            ++matched;
//            pi[begin+matched-1]=matched;
//        }else{
//            if (matched==0){
//                begin++;
//            }
//            else{
//                begin+=matched-pi[matched-1];
//                matched=pi[matched-1];
//            }
//        }
//    }
//    return pi;
//}
//
//vector<int> kmpSearch(const string& H,const string& N){
//    int n=H.size();int m=N.size();
//    vector<int> ret;
//    vector<int> pi =getPartialMatch(N);
//    int begin=0,matched=0;
//    while(begin<=n-m){
//        if (matched<m && H[begin+matched]==N[matched]){
//            ++matched;
//            if (matched==m)ret.push_back(begin);
//        }
//        else{
//            if (matched==0)
//                ++begin;
//            else{
//                begin+=matched-pi[matched-1];
//                matched =pi[matched-1];
//            }
//        }
//    }
//    return ret;
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string str;
//    string str1;
//    cin>>str>>str1;
//    vector<int> answer=kmpSearch(str,str1);
//    if (answer.size()>0){
//        cout<<1<<'\n';
//    }else{
//        cout<<0<<'\n';
//    }
//}
