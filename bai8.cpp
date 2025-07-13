#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int ans = INT_MAX;
    int x1 = -1, y1 = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            bool ok = true;
            for (int k = 0; k < 4; k++) {
                int x2 = i + dx[k];
                int y2 = j + dy[k];
                if (x2 >= 0 && x2 < m && y2 >= 0 && y2 < n) {
                    if (a[i][j] <= a[x2][y2]) {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) {
                if (a[i][j] < ans) {
                    ans = a[i][j];
                    x1 = i;
                    y1 = j;
                }
            }
        }
    }
    if (x1 == -1) cout << -1 << endl;
    else cout << x1 << " " << y1 << endl;
    return 0;
}
