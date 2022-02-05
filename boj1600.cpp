#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

struct monkey {
    int x, y, z;
};

int w, h, k;
int a[200][200];
int dist[200][200][31];
const int dx[] = { -1, 0, 1, 0, 2, 1, -1, -2, -2, -1, 1, 2 };
const int dy[] = { 0, 1, 0, -1, 1, 2, 2, 1, -1, -2, -2, -1 };

void bfs() {
    queue<monkey> q;
    q.push({ 0, 0, 0 });
    while (!q.empty()) {
        int x = q.front().x, y = q.front().y, z = q.front().z; q.pop();
        int j = z == k ? 4 : 12;
        if (x == h - 1 && y == w - 1) {
            cout << dist[x][y][z] << '\n';
            return;
        }
        for (int i = 0; i < j; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            int nz = i < 4 ? z : z + 1;
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (dist[nx][ny][nz] || a[nx][ny]) continue;
            dist[nx][ny][nz] = dist[x][y][z] + 1;
            q.push({ nx, ny, nz });
        }
    }
    cout << -1 << '\n';
}

int main() {
    cin >> k;
    cin >> w >> h;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin>>a[i][j];
        }
    }
    bfs();
    return 0;
}
