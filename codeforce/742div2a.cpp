#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
int a[1007];
int main() {
  int t, n, h;
  fastio;
  cin >> t;
  while (t--) {
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < 2; ++i) {
      int key = i;
      for (int j = i + 1; j < n; ++j) {
        if (a[key] < a[i]) key = i;
      }
      swap(a[key], a[i]);
    }
    int key = a[0] + a[1];
    int cnt = h / key;
    if (h % key) {
      h = h % key;
      if (h < a[0]) {
        cnt++;
      }else cnt += 2;
    }
    cout << cnt << endl;
  }
  return 0;
}
