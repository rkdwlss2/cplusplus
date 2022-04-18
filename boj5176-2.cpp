//
//  boj5176-2.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/04/18.
//

#include <iostream>
using namespace std;

int arr[501];

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        fill(arr,arr+501,0);
        int a,b;
        cin>>a>>b;
        for (int i = 0 ; i <a;i++){
            int tmp;
            cin>>tmp;
            arr[tmp]++;
        }
        int answer=0;
        for (int i=1;i<=b;i++){
            if (arr[i]>0)answer++;
        }
        cout<<a-answer<<'\n';
    }
}
