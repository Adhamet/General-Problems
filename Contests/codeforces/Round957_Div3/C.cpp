#include <bits/stdc++.h>
using namespace std;

#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#define F first
#define S second
#define el '\n'

using ll = long long;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

// const int N = 20 + 5;
// const int oo = 1e9 + 20;

int main()	{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> vec(n);
        iota(begin(vec), end(vec), 1);

        vector<int> ans;

        int i = n - 1;
        while (vec[i] >= k && i >= 0) {
            ans.push_back(vec[i--]);
        }

        while (vec[i] > m) {
            ans.push_back(vec[i--]);
        }

        i = 0;
        while (vec[i] <= m && i <= n) {
            ans.push_back(vec[i++]);
        }

        for (auto ele: ans) cout << ele << " ";
        cout << el;
    }

    return 0;
}
