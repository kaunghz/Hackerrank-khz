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
    vector<short int> arr;
    for (int i=0; i<n; ++i) {
        static short int t;
        cin >> t;
        arr.push_back(t);
    }
    // 7 1 2 3 4 3 2 1
    if (arr.size() > 1) {
        sort (arr.begin(), arr.end());
        arr.push_back(arr[0]);
        for (int i=0; i<n; ++i) {
            if (arr[i]!=arr[++i]) {
                cout << arr[--i] << "\n";
                break;
            }
        }
    } else 
        cout << arr[0] << "\n";
}
