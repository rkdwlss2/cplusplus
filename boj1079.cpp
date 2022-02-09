////
////  boj1079.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/02/09.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n,k;
//bool alive[17];
//int arr[17];
//int board[17][17];
//int answer=0;
//void getChange(int num,int mod){
//    for (int i = 0  ; i < n;i++){
//        arr[i]+=(board[num][i]*mod);
//    }
//}
//
//int findBig(int index){
//    priority_queue<pair<int,int>> pq;
//    for (int i = 0 ; i < n;i++){
//        if (index==i)continue;
//        if (alive[i]==false)continue;
//        pq.push({arr[i],-i});
//    }
//    if (!pq.empty()){
//        return -pq.top().second;
//    }else{
//        return -1;
//    }
//    
//}
//
//
//void go(int num,int ans){
//    if (num==0){
//        if (alive[k]==true){
//            if (answer<ans-1)answer=ans-1;
//        }else{
//            if (answer<ans-1)answer=ans-1;
//        }
//        return;
//    }
//    for (int i = 0 ; i < n;i++){
//        if (k==i)continue;
//        if (alive[i]==false)continue;
//        alive[i]=false;
//        getChange(i,1);
//        int index=findBig(-1);
//        if (index==k){
//            if (answer<ans)answer=ans;
//            getChange(i,-1);
//            alive[i]=true;
//            continue;
//        }else if (index==-1){
//            if (num==answer<ans)answer=ans;
//            getChange(i,-1);
//            alive[i]=true;
//            continue;
//        }else{
//            alive[index]=false;
//            getChange(index,1);
//        }
//        go(num-2,ans+1);
//        getChange(i,-1);
//        alive[i]=true;
//        
//        getChange(index,-1);
//        alive[index]=true;
//    }
//    
//}
//
//void go2(int num,int ans){
//    if (num==1){
//        if (alive[k]==true){
//            if (answer<ans-1)answer=ans-1;
//        }else{
//            if (answer<ans-1)answer=ans-1;
//        }
//        return;
//    }
//    for (int i = 0 ; i < n;i++){
//        if (k==i)continue;
//        if (alive[i]==false)continue;
//       
//        int index=findBig(i);
//        if (index==k){
//            if (answer<ans-1)answer=ans-1;
//            continue;
//        }else if (index==-1){
//            continue;
//        }else{
//            
//            alive[index]=false;
//            getChange(index,1);
//        }
//        
//        
//        
//        alive[i]=false;
//        getChange(i,1);
//        
//        go2(num-2,ans+1);
//        getChange(i,-1);
//        alive[i]=true;
//        
//        getChange(index,-1);
//        alive[index]=true;
//    }
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        cin>>arr[i];
//    }
//    for (int i = 0 ;  i < n;i++){
//        for (int j = 0 ; j < n;j++){
//            cin>>board[i][j];
//        }
//    }
//    cin>>k;
//    fill(alive,alive+n,true);
//    if (n%2==1){
//        go2(n,1);
//    }else{
//        go(n,1);
//    }
//    cout<<answer<<'\n';
//}
