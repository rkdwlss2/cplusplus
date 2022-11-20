////
////  kakao2.cpp
////  cplusplus
////
////  Created by 강명진 on 2022/09/24.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> delivery;
//vector<int> pickup;
//
//int findDeliveryIndex(int mod,int k){
//    // 마지막 배송할 곳 찾기
//    int deliveryIndex = -1;
//    int Size = (mod==0)?delivery.size():pickup.size();
//    if (mod==2)Size=k+1;
//    for (int i = Size-1;i>=0 ;i--){
//        if (((mod==0)?delivery[i]:pickup[i])>0){
//            deliveryIndex = i;
//            break;
//        }
//    }
//    return deliveryIndex;
//}
//
//
//long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
//    long long answer = 0;
//    int truck = 0;
//    int base = cap;
//    
//    delivery = deliveries;
//    pickup = pickups;
//    
//    // 마지막 전달 할 곳 찾기
//    while(true){
//
//        int deliveryIndex = findDeliveryIndex(0,0);
//        int pickupIndex = findDeliveryIndex(1,0);
//        if (deliveryIndex==-1&&pickupIndex==-1)break;
//        if (base==0&&pickupIndex==-1)break;
//        truck=cap;
//        // 배송할 곳 찾기
//        if (truck>0){
//            while(true){
//                int tmpIndex = findDeliveryIndex(0,0);
//                if (tmpIndex==-1||truck==0)break;
//                int now = delivery[tmpIndex];
//                int minus=((delivery[tmpIndex]>truck)?truck:delivery[tmpIndex]);
//                delivery[tmpIndex]-=minus;
//                truck -= minus;
//                if (delivery[tmpIndex]==0){
//                    int Size = delivery.size()-tmpIndex;
//                    while (Size--){
//                        delivery.pop_back();
//                    }
//                    
//                }
//                
//            }
//        }
//        if (truck>0){
//            base+=truck;
//        }
//        truck=0;
//        if (deliveryIndex<pickupIndex){
//            deliveryIndex = pickupIndex;
//        }
//        // 수거할 택배함 찾기
//        while(true){
//            int tmpIndex = findDeliveryIndex(1,0);
//            if (tmpIndex==-1||truck>=cap)break;
//            int gap = cap - truck;
//            int plus = (pickup[tmpIndex]>=gap)?gap:pickup[tmpIndex];
//            pickup[tmpIndex]-=plus;
//            truck+=plus;
//            if (pickup[tmpIndex]==0){
//                int Size = pickup.size()-tmpIndex;
//                while (Size--){
//                    pickup.pop_back();
//                }
//            }
//            
//        }
//        answer+=((deliveryIndex+1)*2);
//        base+=truck;
//        truck=0;
//    }
//    
//    return answer;
//}
//
//int main(){
//    cout<<solution(4, 5, {1, 0, 3, 1, 2}, {0, 3, 0, 4, 0});
//}
