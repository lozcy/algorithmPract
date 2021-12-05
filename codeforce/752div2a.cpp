#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
int main() {
  fastio;
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int tmp;
    int maxx = 0;
    for (int i = 1; i <= n; ++i) {
      cin >> tmp;
      maxx = max(tmp - i, maxx);
    }
    cout << maxx << endl;
  }
  return 0;
}
