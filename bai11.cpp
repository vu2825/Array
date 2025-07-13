#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

string ADD (string a, string b) {
      int len = max((int)a.size(), (int)b.size());
      while (a.size() < len) a = "0" + a;
      while (b.size() < len) b = "0" + b;
      string res = "";
      int carry = 0;
      for (int i = len - 1; i >= 0; i--) {
            int temp = (a[i] - '0') + (b[i] - '0') + carry;
            int dv = temp % 10;
            carry = temp / 10;
            res.push_back(dv + '0');
      }
      if (carry != 0) res.push_back(carry + '0');
      reverse(res.begin(), res.end());
      return res;
}

bool isSmaller (string& a, string& b) {
      if (a.size() < b.size()) return true;
      if (b.size() < a.size()) return false;
      return a < b;
}
string SUB (string a, string b) {
      bool sign = false;
      if (isSmaller(a,b)) {
            swap(a, b);
            sign = true;
      }
      int len = max((int)a.size(), (int)b.size());
      while (a.size() < len) a = "0" + a;
      while (b.size() < len) b = "0" + b;
      int carry = 0;
      string res = "";
      for (int i = len - 1; i >= 0; i--) {
            int temp = (a[i] - '0') - (b[i] - '0' + carry);
            if (temp < 0) {
                  temp += 10;
                  carry = 1;
            }
            else carry = 0;
            res.push_back(temp + '0');
      }
      while (res.back() == '0' && res.size() > 1) res.pop_back();
      if (sign) res.push_back('-');
      reverse(res.begin(),res.end());
      return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    cout << ADD(a, b) << endl;
    cout << SUB(a, b) << endl;
    return 0;
}
