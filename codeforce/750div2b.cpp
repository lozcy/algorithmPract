#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

int main() {
  fastio;
  int t;
  cin >> t;
  int n;
  while (t--) {
    int zero = 0, one = 0;
    int tmp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> tmp;
      if (tmp == 0) zero++;
      if (tmp == 1) one++;
    }
    if (!one) {
      cout << 0 << endl;
    }else {
      cout << 1LL * one * (long long)pow(2, zero) << endl;
    }
  }
  return 0;
}
