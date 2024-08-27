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
        string s;
        cin >> s;

        string t = s;
        sort(begin(t), end(t));

        if (s != t) {
            cout << "YES\n" << t << el;
        } else {
            reverse(begin(t), end(t));

            if (s == t) {
                cout << "NO\n";
            } else {
                cout << "YES\n" << t << el;
            }
        }
    }

    return 0;
}
