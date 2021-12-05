#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
int a[300007];
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
int main() {
  fastio;
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
      cin >> a[i];
    }
    int flag = 1;
    ll sum = 1;
    for (int i = 1; i <= n; ++i) {
      sum = lcm(sum, i + 1);
      if (sum >= 1e9) break;
      if (a[i] % sum == 0) {
        flag = 0;
        break;
      }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
