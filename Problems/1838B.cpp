#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
	int n;
	cin >> n;
	int i1 = -1, i2 = -1, im = -1;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x == 1)
			i1 = i+1;
		else if(x == 2)
			i2 = i+1;
		else if(x == n)
			im = i+1;
	}
	if(im < min(i1,i2)) {
		cout << im << " " << min(i1,i2) << "\n";
	}
	else if(im > max(i1,i2)) {
		cout << im << " " << max(i1,i2) << "\n";	
	}
	else
		cout << i1 << " " << i2 << "\n";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
