#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        ll ans = 0;
        // process each even index i = 2,4,6,...
        for (int i = 2; i <= n; i += 2) {
            // ensure left odd <= a[i]
            if (i-1 >= 1 && a[i-1] > a[i]) {
                ans += a[i-1] - a[i];
                a[i-1] = a[i];
            }
            // ensure right odd <= a[i]
            if (i+1 <= n && a[i+1] > a[i]) {
                ans += a[i+1] - a[i];
                a[i+1] = a[i];
            }
            // ensure a[i] >= a[i-1] + a[i+1] (triplet)
            if (i-1 >= 1 && i+1 <= n && a[i-1] + a[i+1] > a[i]) {
                ll diff = (a[i-1] + a[i+1]) - a[i];
                ans += diff;
                // push the extra reduction to the right neighbour (greedy)
                a[i+1] -= diff;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
