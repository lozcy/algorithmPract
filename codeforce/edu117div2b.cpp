#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
int arr[107];
int main() {
  int t;
  fastio;
  cin >> t;
  int n, a, b;
  while (t--) {
    cin >> n >> a >> b;
    int half = n / 2;
    if ((n - a + 1) < half || b < half) {
      cout << -1 << endl;
      continue;
    }
    int l = 1, r = n;
    for (int i = 1; i <= n; ++i) {
      arr[i] = i;
    }
    while (l < r) {
      while (l < r && arr[l] >= a) l++;
      while (l < r && arr[r] <= b) r--;
      swap(arr[l], arr[r]);
    }
    for (int i = 1; i <= n; ++i) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }
  return 0;
}
