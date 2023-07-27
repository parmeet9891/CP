#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 1; i < n; i++) {
      cin >> a[i];
    }
    vector<long long> f;
    vector<int> check(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
      long long num = a[i + 1] - a[i];
      if (1 <= num && num <= n && !check[num]) {
        check[num] = 1;
      } else {
        f.push_back(num);
      }
    }
    if (f.empty()) {
      cout << "YES" << '\n';
      return;
    }
    if (f.size() > 1) {
      cout << "NO" << '\n';
      return;
    }
    vector<int> last;
    for (int i = 1; i <= n; i++) {
      if (!check[i]) {
        last.push_back(i);
      }
    }
    if (last.size() == 2 && f[0] == last[0] + last[1]) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}