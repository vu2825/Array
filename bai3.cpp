#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

void insert(int a[], int &n, int x, int pos) {
    if (pos < 0 || pos > n) return;
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    ++n;
}

void remove(int a[], int &n, int pos) {
    if (pos < 0 || pos > n) return;
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    --n;
}

void update(int a[], int n, int pos, int x) {
    if (pos < 0 || pos > n) return;
    a[pos] = x;
}

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
