//
//  boj10173.cpp
//  cplusplus
//
//  Created by 강명진 on 2022/02/26.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        string tmp;
        getline(cin,tmp);
        if (tmp.compare("EOI")==0){
            break;
        }
        bool ok=false;
        for (int i = 0 ; i < tmp.size()-4+1;i++){
            if ((tmp[i]=='n'||tmp[i]=='N')&&(tmp[i+1]=='e'||tmp[i+1]=='E')&&(tmp[i+2]=='m'||tmp[i+2]=='M')&&(tmp[i+3]=='o'||tmp[i+3]=='O')){
                cout<<"Found"<<'\n';
                ok=true;
                break;
            }
        }
        if (!ok){
            cout<<"Missing"<<'\n';
        }
    }
}
