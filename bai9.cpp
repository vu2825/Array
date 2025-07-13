#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

string toBin(int n) {
    if (n == 0) return "0";
    string res = "";
    while (n != 0) {
        res += char(n % 2 + '0');
        n /= 2;
    }
    return res;
}

string toOct(int n) {
    if (n == 0) return "0";
    string res = "";
    while (n != 0) {
        res += char(n % 8 + '0');
        n /= 8;
    }
    return res;
}

string toHex(int n) {
    if (n == 0) return "0";
    string res = "";
    char hx[] = "0123456789ABCDEF";
    while (n != 0) {
        res += hx[n % 16];
        n /= 16;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << toBin(n) << endl;
    cout << toOct(n) << endl;
    cout << toHex(n) << endl;
    return 0;
}
