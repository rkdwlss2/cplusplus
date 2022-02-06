//
//  boj13975.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/06.
//

#include <iostream>
#include <queue>
using namespace std;

#define lli long long int

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        priority_queue<lli> pq;
        for (int i = 0 ; i <n;i++){
            lli tmp;
            cin>>tmp;
            pq.push(-tmp);
        }
        lli sum=0;
        while(pq.size()>1){
            lli t1=-pq.top();pq.pop();
            lli t2=-pq.top();pq.pop();
            sum+=(t1+t2);
            pq.push(-(t1+t2));
        }
       // sum+=-pq.top();
        cout<<sum<<'\n';
    }
}
