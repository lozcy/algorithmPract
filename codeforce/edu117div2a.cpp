#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
void dis(int x, int y, int hl, int hr) {
  cout << "answer: ";
  cout << hl + hr << ' ' << x - hl + y - hr << endl;
}
int main() {
  int t;
  fastio;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    if (sum & 1) {
      cout << -1 << ' ' << -1 << endl;
    }else {
      int tx, ty;
      tx = x / 2;
      if (x & 1) {
        tx = tx + 1;
      }
      ty = y / 2;
      cout << tx << ' ' << ty << endl;
    }
  }
  return 0;
}
