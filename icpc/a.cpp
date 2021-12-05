#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const int maxn = 100007;
int nxt[32 * maxn][2];
int num[32 * maxn];
int val[32 * maxn];
typedef long long ll;
int cnt = 0;
void insert(ll x) {
	    int root = 0;
	        for (int i = 32; i >= 0; --i) {
			        int id = (x >> i) & 1;
				        if (!nxt[root][id])
						            nxt[root][id] = ++cnt;
					        root = nxt[root][id];
						        num[root]++;
							    }
		    val[root] = x;
}
int query(ll x) {
	    int root = 0;
	        for (int i = 32; i >= 0; --i) {
			        int id = (x >> i) & 1;
				        if (nxt[root][id ^ 1]) {
						            root = nxt[root][id ^ 1];
							            }else root = nxt[root][id];
					    }
		    return val[root];
}
int a[maxn];
int main() {
	    int t;
	        fastio;
		    int n, m;
		        cin >> t;
			    int k = 1;
			        while (t--) {
					        cnt = 0;
						        memset(val, 0, sizeof val);
							        memset(nxt, 0, sizeof nxt);
								        printf("Case #%d:\n", k++);
									        cin >> n >> m;
										        for (int i = 0; i < n; ++i) {
												            cin >> a[i];
													                insert(a[i]);
															        }
											        int x;
												        for (int i = 0; i < m; ++i) {
														            cin >> x;
															                printf("%d", query(x));
																	            if (i < m - 1) printf(" ");
																		            }
													    }

				    return 0;
}
