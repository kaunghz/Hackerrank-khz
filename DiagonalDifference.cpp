#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
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
    vector<int> c;
    vector<vector<int>> arr; 
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            static int t;
            cin >> t;
            c.push_back(t);
        }
        arr.push_back(c);
        c.clear();
    }
    int a=0, b=0;
	for (int i=0; i<n; ++i) {
		a+=arr[i][i];
		b+=arr[i][n-i-1];
	}
	cout << abs(a-b) << "\n";
}
