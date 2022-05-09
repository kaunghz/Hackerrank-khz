#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int flippingMatrix(vector<vector<int>>& matrix);
void solve();
int main() {
    solve();
    return 0;
}

// problem solution
int flippingMatrix(vector<vector<int>>& matrix) {
    int n=matrix.size()/2;
    int ans=0;
    for (unsigned int i=0; i<n; ++i) {
        for (unsigned int j=0; j<n; ++j) {
            ans += max(max(matrix[i][j],matrix[2*n-i-1][j]),max(matrix[i][2*n-j-1],matrix[2*n-i-1][2*n-j-1]));
        }
    }
    return ans;
}
void solve() {
    int q, n;
    cin >> q >> n;
    vector<int> c;
    vector<vector<int>> matrix;
    while (q--) {
        for (int i=0; i<2*n; ++i) {
            for (int j=0; j<2*n; ++j) {
                static int t;
                cin >> t;
                c.push_back(t);
            }
            matrix.push_back(c);
            c.clear();
        }
        cout << flippingMatrix(matrix) << "\n";
    }
}
