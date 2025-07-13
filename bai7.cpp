#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

string xuLy(string s) {
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) {
        if (!res.empty()) res += " ";
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        res += word;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    cout << xuLy(s) << endl;
    return 0;
}
