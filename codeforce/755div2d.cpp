#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[300007], b[300007];
int prv[300007];
int main()
{
	int n;

	cin >> n;
	memset(prv, -1, sizeof prv);
	set<int> s;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		s.insert(i);
	}
	s.insert(0);
	s.insert(n + 1);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &b[i]);
	}
	queue<pair<ll, ll> > q;
	q.push({ n, n });
	int flag = 0;
	while (!q.empty()) {
		int u = q.front().first, par = q.front().second;
		q.pop();
		auto it = s.lower_bound(u - a[u]);
		vector<int> pb;
		pb.push_back(u);
		for (; it != s.end() && *it < u; ++it) {
			prv[*it] = par;
			q.push({ *it + b[*it], *it });
			pb.push_back(*it);
			if (*it == 0) {
				flag = 1;
				break;
			}
		}
		if (flag) break;
		for (int i : pb) s.erase(i);
	}
	if (!flag) {
		cout << -1 << endl;
	} else {
		vector<int> ans;
		int now = 0;
		while (now != n) {
			ans.push_back(now);
			now = prv[now];
		}
		cout << ans.size() << endl;
		for (int i = ans.size() - 1; i >= 0; --i) {
			cout << ans[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
