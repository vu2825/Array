#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int b[n * m];
    for (int i = 0; i < n * m; i++) {
        cin >> b[i];
    }
    int a[n][m];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = b[idx++];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
