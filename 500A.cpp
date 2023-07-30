#include<bits/stdc++.h>
using namespace std;

void solve() {
        int n,t;
        cin >> n >> t;
        vector<int> a(n+1);
        for(int i = 1; i < n; i++) {
                cin >> a[i];
        }
        a[n] = 1;
        bool ok = false;
        int i = 1;
        while(i <= n) {
                ok |= (i == t);
                i = (i+a[i]);
                //cout << i << " ";
        }
        cout << (ok ? "YES" : "NO") << "\n";
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        //int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
        solve();
}
