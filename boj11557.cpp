//
//  boj11557.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/09.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while (tc--) {
        int n;
        cin>>n;
        int Big=-1;
        string name ="";
        for (int i = 0; i < n;i++){
            int a;
            string b;
            cin>>b>>a;
            if (a>Big){
                Big=a;
                name=b;
            }
        }
        cout<<name<<'\n';
    }
}
