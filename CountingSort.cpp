#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void solve();
int main() {
    solve();
    return 0;
}

// problem solution
void solve() {
	int n;
	cin >> n;
	vector<int> arr;
	vector<int> sorted;
	for (int i=0; i<n; ++i) {
		static int t;
		cin >> t;
		arr.push_back(t);
		sorted.push_back(0);
	}
	for (int i=0; i<n; ++i)
		++sorted[arr[i]];
	for (int i=0; i<100; ++i)
		cout << sorted[i] << ' ';
	cout << "\n";
}	
