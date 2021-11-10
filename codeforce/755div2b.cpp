#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int check[2007];

int main()
{
	int t;

	cin >> t;
	int n;
	while (t--) {
		cin >> n;
		vector<int> v(n, 0);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &v[i]);
		}
		vector<vector<int> > p;
		p.push_back(v);
		for (int i = 0; i <= n; ++i) {
			memset(check, 0, sizeof check);
			for (int i = 0; i < n; ++i) {
				check[v[i]]++;
			}
			for (int i = 0; i < n; ++i) {
				v[i] = check[v[i]];
			}
			p.push_back(v);
		}
		int q;
		scanf("%d", &q);
		while (q--) {
			int key, xi;
			scanf("%d %d", &xi, &key);
			if (key > n) key = n;
			printf("%d\n", p[key][xi - 1]);
		}
	}
	return 0;
}
