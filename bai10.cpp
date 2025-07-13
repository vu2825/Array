#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

bool namNhuan(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int ngayTrongThang(int m, int y) {
    if (m == 2) return namNhuan(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

bool ngayHopLe(int d, int m, int y) {
    if (y <= 0 || m < 1 || m > 12 || d < 1) return false;
    return d <= ngayTrongThang(m, y);
}

void ngayKeTiep(int &d, int &m, int &y) {
    ++d;
    if (d > ngayTrongThang(m, y)) {
        d = 1;
        ++m;
        if (m > 12) {
            m = 1;
            ++y;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d, m, y;
    cin >> d >> m >> y;
    if (!ngayHopLe(d, m, y)) return 0;
    else {
        ngayKeTiep(d, m, y);
        cout << d << "/" << m << "/" << y << endl;
    }
    return 0;
}
