#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int a1,a2,b1,b2;
	cin >> a1 >> a2 >> b1 >> b2;
	int res = (a1-a2) + (b1-b2);
	if(res >= 0)
		cout << "NO" << "\n";
	else
		cout << "YES" << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
