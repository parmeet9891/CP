#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	if(n == 1) {
		cout << "1" << "\n";
		return;
	}
	else if(n == 2) {
		cout << "2" << " " << "1" << "\n";
		return;
	}
	a[0] = 2;
	a[n / 2] = 1;
	a[n - 1] = 3;
	int t = 4;
	for(int i = 1; i < (n/2); i++)
		a[i] = t++;
	for(int i = (n/2)+1; i < n-1; i++)
		a[i] = t++;

	for(int i = 0; i < n; i++)
		cout << a[i] << " \n"[i == n-1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
