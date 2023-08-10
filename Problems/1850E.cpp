#include<bits/stdc++.h>
using namespace std;

void solve() {
  long long n, c; cin >> n >> c;
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = 1, r = 1e9;
    while(l <= r) {
        long long mid = l + (r - l) / 2;
        long long sumall = 0;
        for(int i = 0; i < n; ++i) {
            sumall += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sumall > c) break;
        }
        if(sumall == c) {
            cout << mid << "\n";
            return;
        }
        if(sumall > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    } 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
