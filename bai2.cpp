#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

bool binarySearch(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) {
            return true;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (binarySearch(a, n, x)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
