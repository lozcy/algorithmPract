#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int key = 0;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] < s[key]) {
                key = i;
            }
        }
        cout << s[key] << ' ' << (s.substr(0, key) + s.substr(key + 1)) << endl;
    }

    return 0;
}