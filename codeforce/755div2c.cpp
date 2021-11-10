#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200007];
int main()
{
	int t;
	int n;

	cin >> t;
	while (t--) {
		int bit[37] = { 0 };
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			for (int k = 0; k < 30; ++k) {
				if ((1 << k) & a[i]) {
					bit[k]++;
				}
			}
		}
		printf("1");
		for (int i = 2; i <= n; ++i) {
			int flag = 1;
			for (int k = 0; k < 30; ++k) {
				if (bit[k] % i != 0) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				printf(" %d", i);
			}
		}
		printf("\n");
	}
	return 0;
}
