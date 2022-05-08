#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void solve();
void get(vector<string>& v, const int& n);
int main() {
    solve();
    return 0;
}
// problem solve
void get(vector<string>& v, const int& n) {
	string t;
	for (int i=0; i<n; ++i) {
		cin >> t;
		sort(t.begin(), t.end());
		v.push_back(t);
	}
}
void solve() {
	int n, m;
	vector<string> d, q;
	cin >> n;
	get(d, n);
	cin >> m; 
	get(q, m);
	for (auto a: q) {
		int sum=0;
		for (auto b: d)
			if (a == b)
				++sum;
		cout << sum << "\n";
	}					
}
