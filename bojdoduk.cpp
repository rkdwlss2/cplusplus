#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dp[1000001][4];

int solution(vector<int> money) {
    int answer = 0;
    int n=money.size();
    for (int i = 0 ; i < money.size();i++){
        int prev,now=dp[i][i],next;
        if (i==0){
            dp[i][0]=0;
            dp[i][1]=money[i];
            dp[i][2]=0;
            dp[i][3]=0;
        }else if (i==n-1){
            dp[i][0]=max(max(dp[i-1][0],dp[i-1][1]),max(dp[i-1][2],dp[i-1][3]));
            dp[i][1]=max(dp[i-1][0]+money[i],dp[i-1][2]+money[i]);
            dp[i][2]=max(max(dp[i-1][0],dp[i-1][1]),max(dp[i-1][2],dp[i-1][3]));
            dp[i][3]=0;
        }else{
            dp[i][0]=max(max(dp[i-1][0],dp[i-1][1]),max(dp[i-1][2],dp[i-1][3]));
            dp[i][1]=max(dp[i-1][0]+money[i],dp[i-1][2]+money[i]);
            dp[i][2]=max(max(dp[i-1][0],dp[i-1][1]),max(dp[i-1][2],dp[i-1][3]));
            dp[i][3]=max(dp[i-1][0]+money[i],dp[i-1][2]+money[i]);
        }
        
    }
    for (int i =0 ; i<4;i++){
        if (answer<dp[n-1][i])answer=dp[n-1][i];
    }
    return answer;
}
