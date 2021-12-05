#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
int a[100007];
int main() {
    fastio;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int l = 0, r = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i > 0 && a[i] > a[i - 1]) {
                l++;
            }
            if (i > 0 && a[i] < a[i - 1]) {
                r++;
            }
        }
        if (l == 1 || r == 1 || l == 0 || r == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}