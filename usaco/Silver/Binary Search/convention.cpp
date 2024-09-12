#include <bits/stdc++.h>
using namespace std;

#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#define F first
#define S second
#define el '\n'

using ll = long long;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	freopen("convention.in", "r", stdin);
	freopen("convention.out", "w", stdout);
	
	int n, m, c;
	cin >> n >> m >> c;

	vector<int> a(n);
	for (auto &i: a) cin >> i;
	sort(a.begin(), a.end());

	auto can = [&](int mid) -> bool {
		int ptr = a[0];

		int buses = 1, cowsOnBus = 0;
		for (int i = 0; i < n; i++) {
			cowsOnBus += 1;

			if (a[i] - ptr > mid || cowsOnBus > c) {
				buses += 1, cowsOnBus = 1;
				if (buses > m) return false;
				ptr = a[i];
			}
		}

		return true;
	};
	
	int l = 0, r = a[n - 1] - a[0], ans = 0;
	while (l <= r) {
		int mid = (l + r) / 2;

		if (can(mid)) r = mid - 1, ans = mid;
		else l = mid + 1;
	}
	cout << ans << el;

	return 0;
}
