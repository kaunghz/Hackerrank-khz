#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define li long int
using namespace std;
void solve();
int main() {
    solve();
    return 0;
}

// problem solution
void solve() {
	vector<li> a, b;
	li n, m, t;
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> t;
		a.push_back(t);
	}
	sort(a.begin(),a.end());
	cin >> m;
	for (int i=0; i<m; ++i) {
		cin >> t;
		b.push_back(t);
	}
	sort(b.begin(), b.end());
	li ans=0;
	for (int i=0; i<n; ++i)
		ans+=abs(a[i]-b[i]);
	cout << ans << "\n";
}
 