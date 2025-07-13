#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[n * m];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[idx++] = a[i][j];
        }
    }
    for (int i = 0; i < n * m; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
