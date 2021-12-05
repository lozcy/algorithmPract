#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
int a[100007], b[100007];
int main() {
  fastio;
  int t;
  int n, x;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
      cin >> a[i];
      b[i] = a[i];
    }
    if (x * 2 <= n) {
      cout << "YES" << endl;
      continue;
    }
    sort(b + 1, b + n + 1);
    int l = x + 1, r = n - x;
    if (l <= r) {
      cout << "YES" << endl;
      continue;
    }
    int flag = 0;
    for (int i = r + 1; i < l; ++i) {
      if (a[i] != b[i]) {
        flag = 1;
        break;
      }
    }
    if (!flag) {
      cout << "YES" << endl;
    }else cout << "NO" << endl;
  }

  return 0;
}
