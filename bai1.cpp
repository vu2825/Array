#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = x;
    int i = 0;
    while (a[i] != x) {
        ++i;
    }
    if (i < n) cout << i << " ";
    else cout << "NONE\n";
    return 0;
}
