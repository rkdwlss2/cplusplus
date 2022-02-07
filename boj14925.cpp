////
////  boj14925.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/07.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int m,n;
//int board[1001][1001];
//int answer=0;
//int main(){
//    cin>>m>>n;
//    for (int i = 0 ; i < m;i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>board[i][j];
//        }
//    }
//    for (int i = 0 ; i <m;i++){
//        for (int j = 0 ; j <n;j++){
//            int l=m-i;
//            int k=n-j;
//            int len=min(l,k); //가로 세로중 가장 작은값 리턴
//            int tmp=len;
//            int sum=0;
//            while(tmp){ //tmp가 음수가 되면 스탑
//                int now=len-tmp;  // 현재 갈수 있는 길이를 구함
//                int sx=j+now;  //아래로 내려갈때 좌표
//                int sy=i+now; // 우측으로 갈때 좌표
//                for (int d=0;d<now+1;d++){ //+1한거는 아래로 내려갈때 한칸더 내려가려고 지정해서
//                    int nowBoard=board[i+d][sx];
//                    sum+=nowBoard;
//                }
//                for (int d=0;d<now;d++){//얘는 더 필요 없다.
//                    int nowBoard=board[sy][j+d];
//                    sum+=nowBoard;
//                }
//                if (sum==0){
//                    if (answer<now+1){//answer랑 비교한다
//                        answer=now+1;
//                    }
//                }else{
//                    break;
//                }
//                tmp--;
//            }
//        }
//    }
//    cout<<answer<<'\n';
//}
