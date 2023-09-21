#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int l,v1,v2;
	cin >> l >> v1 >> v2;
	int turtle, hare;
	if((l%v1) == 0)
		turtle = (l/v1);
	else
		turtle = (l/v1)+1;
	
	if((l%v2) == 0)
		hare = (l/v2);
	else
		hare = (l/v2)+1;
	
	//cout << turtle << " " << hare << " " << "\n";
	cout << (turtle-hare)-1 << "\n";
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
