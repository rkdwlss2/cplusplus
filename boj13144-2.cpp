////
////  boj13144-2.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/22.
////
//
//#include <iostream>
//using namespace std;
//#define lli long long int
//int n;
//
//int arr[100001];
//int cnt[100001];
//
//void tp(){
//    lli ans=0;
//    int lo=1;
//    int hi=0;
//    while(lo<=n){
//        while(hi+1<=n&&cnt[arr[hi+1]]==0){
//            hi++;
//            cnt[arr[hi]]++;
//        }
//        ans+=hi-lo+1;
//        cnt[arr[lo++]]--;
//        
//    }
//    cout<<ans<<'\n';
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i=1;i<=n;i++){
//        cin>>arr[i];
//    }
//    tp();
//    
//}
