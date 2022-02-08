//// 3109
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define R_MAX 10001
//#define C_MAX 501
//using namespace std;
//
//int dx[] = {-1, 0, 1};
//int dy[] = {1, 1, 1};
//int map[R_MAX][C_MAX];
//int arr[R_MAX][C_MAX];
//bool visit[R_MAX][C_MAX];
//int R, C, answer;
//
//void run() {
//    // 각 행의 첫 열에서의 출발 경우
//    for (int i = 0; i < R; i++) {
//        int x = i;
//        int y = 0;
//        arr[x][y] = i + 1;  // 시작점
//
//        // 경로 설정
//        while (y != C - 1) {
//            int nx, ny;
//            int flag = 0;
//
//            for (int d = 0; d < 3; d++) {
//                nx = x + dx[d];
//                ny = y + dy[d];
//
//                flag++;
//                if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
//                if (visit[nx][ny]) continue;
//                if (map[nx][ny] == 1) continue;
//
//                visit[nx][ny] = true;
//                arr[nx][ny] = i + 1;
//                x = nx;
//                y = ny;
//                flag = 0;   // 갈 수 있는 경로가 한군데라도 있다면 flag = 0으로 갱신
//                break;
//            }
//
//            if (flag == 3) break;
//        }
//    }
//
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    cin >> R >> C;
//
//    char c;
//    for (int i = 0; i < R; i++) {
//        for (int j = 0; j < C; j++) {
//            cin >> c;
//            if (c == '.') map[i][j] = 0;
//            else if (c == 'x') map[i][j] = 1;
//        }
//    }
//
//
//    run();
//
//    // 마지막 열에 도착한 경우 카운팅
//    int cnt = 0;
//    for (int i = 0; i < R; i++) {
//        if (arr[i][C - 1] != 0) cnt++;
//    }
//    for (int i = 0; i < R; i++) {
//        for (int j = 0; j < C; j++) {
//            cout<<arr[i][j]<<' ';
//        }cout<<'\n';
//    }
//
//    cout << cnt;
//
//    return 0;
//}
