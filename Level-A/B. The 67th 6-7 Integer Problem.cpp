#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    vector<long long> a(7);
    long long total_negated_sum = 0;

    for (int i = 0; i < 7; i++) {
        cin >> a[i];

        total_negated_sum += (-a[i]);
    }



    long long max_sum = -2e18;
    for (int i = 0; i < 7; i++) {
        long long current_sum = total_negated_sum + (2 * a[i]);
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    cout << max_sum << endl;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
}
