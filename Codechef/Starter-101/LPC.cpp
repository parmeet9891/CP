#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n,m;
	cin >> n >> m;
	string s,k;
	cin >> s >> k;
	
	int min_diff = INT_MAX;
	for(int i = 0; i < (n-m+1); i++) {
	    int current_diff = 0;
	    for(int j = 0; j < m; j++) {
	        int diff1 = abs((int)(s[i+j]) - (int)(k[j]));
	        int diff2 = abs(10-diff1);
	        
	        current_diff += min(diff1, diff2);
	    }
	    min_diff = min(min_diff,current_diff);
	}
	cout << min_diff << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
