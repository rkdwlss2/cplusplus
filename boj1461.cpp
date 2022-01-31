//
//  boj1461.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/01/31.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n,m;

priority_queue<int> pqMinus;
priority_queue<int> pqPlus;

priority_queue<int> tmpMinus;
priority_queue<int> tmpPlus;
int answer=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i = 0 ; i < n;i++){
        int tmp;
        cin>>tmp;
        if (tmp>0){
            pqPlus.push(tmp);
        }else if(tmp<0){
            pqMinus.push(-tmp);
        }
    }
    int tmpMinusSum=0;
    int tmpPlusSum=0;
    for (int i = 0 ; i <m;i++){
        if (!pqMinus.empty()){
            int tmpM=pqMinus.top();pqMinus.pop();
            tmpMinus.push(tmpM);
            if (i==0)tmpMinusSum+=tmpM;
            
        }
        if (!pqPlus.empty()){
            int tmpP=pqPlus.top();pqPlus.pop();
            tmpPlus.push(tmpP);
            if (i==0)tmpPlusSum+=tmpP;
        }
    }
    if (tmpPlusSum>=(tmpMinusSum)){
        if (tmpPlus.size()>0){
            answer+=tmpPlus.top();
       //     cout<<tmpPlus.top()<<' ';
        }
        while(!tmpMinus.empty()){
            pqMinus.push(tmpMinus.top());
            tmpMinus.pop();
        }
    }else{
        if (tmpMinus.size()>0){
            answer+=tmpMinus.top();
          //  cout<<tmpMinus.top()<<' ';
        }
        while(!tmpPlus.empty()){
            pqPlus.push(tmpPlus.top());
            tmpPlus.pop();
        }
    }
    int ind=0;
    while(!pqMinus.empty()){
        int now=pqMinus.top();pqMinus.pop();
        if (ind==0){
            answer+=(2*now);
       //     cout<<now<<' ';
        }
        ind++;
        if (ind==m){
            ind=0;
        }
    }
    ind=0;
    while(!pqPlus.empty()){
        int now=pqPlus.top();pqPlus.pop();
        if (ind==0){
            answer+=(2*now);
        //    cout<<now<<' ';
        }
        ind++;
        if (ind==m){
            ind=0;
        }
    }
    cout<<answer<<'\n';
}
