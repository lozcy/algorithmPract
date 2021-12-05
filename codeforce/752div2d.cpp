#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

int main() {
  fastio;
  int t;
  cin >> t;
  int x, y;
  while (t--) {
    cin >> x >> y;
    if (x >= y) {
      cout << x + y << endl;
    }else {
      cout << y - (y % x) / 2 << endl;
    }
    
  }
  return 0;
}
