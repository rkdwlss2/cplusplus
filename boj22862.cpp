////
////  boj22862.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/21.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,k;
//vector<int> v;
//int main(){
//    cin>>n>>k;
//    for (int i = 0 ; i <n;i++){
//        int tmp;
//        cin>>tmp;
//        v.push_back(tmp);
//    }
//    int en=0;
//    int odd=0;
//    int even=0;
//    int MAX=0;
//    for (int st=0;st<n;st++){
//        if (st>=1){
//            int prev=v[st-1];
//            if (prev%2==0)even--;
//            else odd--;
//        }
//        while(en<n&&odd<=k){
//            int now=v[en];
//            if (now%2==0)even++;
//            else odd++;
//            en++;
//        }
//        if (MAX<even){
//            MAX=even;
//        }
//        if (en==n)break;
//    }
//    cout<<MAX<<'\n';
//}
