////
////  boj10992.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/03/10.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int blank=n-1;
//    while(blank--){
//        cout<<' ';
//    }
//    cout<<'*'<<'\n';
//    for (int i = 1 ; i <n-1;i++){
//        blank=n-i-1;
//        int tmp=blank;
//        while(tmp--){
//            cout<<' ';
//        }
//        cout<<'*';
//        int blank2=2*n-1-2-2*blank;
//        while(blank2--){
//            cout<<' ';
//        }
//        cout<<'*';
//        cout<<'\n';
//    }
//    if (n>=2){
//        int tmp=2*n-1;
//        while(tmp--){
//            cout<<'*';
//        }
//        
//    }
//   
//}
