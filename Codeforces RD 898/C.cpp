#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int calc(int row, int col) {
	if(row == 0 || row == 9 || col == 0 || col == 9)
		return 1;
	if(row == 1 || row == 8 || col == 1 || col == 8)
		return 2;
	if(row == 2 || row == 7 || col == 2 || col == 7)
		return 3;
	if(row == 3 || row == 6 || col == 3 || col == 6)
		return 4;
	if(row == 4 || row == 5 || col == 4 || col == 5)
		return 5;
	return 0;
}
 
void solve() {
	int points = 0;
	char x = '.';
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cin >> x;
			if(x == 'X') {
				points += calc(i,j);
			}
		}
	}
	cout << points << "\n";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
