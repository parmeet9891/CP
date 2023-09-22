#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
	string s;
	cin >> s;
	auto curr = s;
	if(curr == "abc") {
		cout << "YES" << "\n";
		return;
	}
	swap(curr[0],curr[1]);
	if(curr == "abc") {
		cout << "YES" << "\n";
		return;
	}
	curr = s;
	swap(curr[1],curr[2]);
	if(curr == "abc") {
		cout << "YES" << "\n";
		return;
	}
	curr = s;
	swap(curr[0],curr[2]);
	if(curr == "abc") {
		cout << "YES" << "\n";
		return;
	}
	
	cout << "NO" << "\n";
	return;
	
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
