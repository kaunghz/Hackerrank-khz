#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;
void solve();
int main() {
    solve();
    return 0;
}

// problem solution
int TowersBreaking(const int& n, const int& m) {
    return ((m==1) || !(n%2)) ? 2 : 1;
}
void solve() {
    int c, n, m;
    cin >> c;
    while (c--) {
        cin >> n >> m;
        cout << TowersBreaking(n, m) << "\n";
    }   
}