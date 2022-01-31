//#include <stdio.h>
//#include <algorithm>
//#include <utility>
//#include <cmath>
//#include <cstring>
//using namespace std;
//using ii = pair<int, int>;
//
//ii arr[1005];
//int N, M, dp[1005][1005];
//void input() {
//    scanf("%d%d", &N, &M);
//    arr[0] = ii(1, 1), arr[1] = ii(N, N);
//    memset(dp, -1, sizeof(dp));
//    for (int i = 2; i <= M + 1; i++) {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        arr[i] = ii(a, b);
//    }
//}
//int dist(ii a, ii b) {
//    return abs(a.first - b.first) + abs(a.second - b.second);
//}
//
//int go(int l, int r) {
//    int curr = max(l, r);
//    if (curr == M + 1) return 0;
//    int&ret = dp[l][r];
//    if (ret != -1) return ret;
//    int d1 = go(curr + 1, r) + dist(arr[curr+1], arr[l]);
//    int d2 = go(l, curr + 1) + dist(arr[curr+1], arr[r]);
//    return ret = min(d1, d2);
//}
//
//void print(int l, int r) {
//    int curr = max(l, r);
//    if (curr == M + 1) return;
//    int d1 = go(curr + 1, r) + dist(arr[curr+1], arr[l]);
//    int d2 = go(l, curr + 1) + dist(arr[curr+1], arr[r]);
//    if (d1 < d2) {
//        printf("1\n");
//        print(curr + 1, r);
//    }
//    else {
//        printf("2\n");
//        print(l, curr + 1);
//    }
//}
//
//void solve() {
//    printf("%d\n", go(0, 1));
//    print(0, 1);
//}
//
//int main() {
//    input();
//    solve();
//    return 0;
//}
