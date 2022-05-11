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
int superDigit(string n, int k) {
    long int sum=0;
    for (int i=0; i<n.length(); ++i)
        sum+=(n[i]-'0');
    sum*=k;
    return n.length()>1 ? superDigit (to_string(sum), 1) : sum;
}
void solve() {
    string n;
    int k;
    cin >> n >> k;
    cout << superDigit(n, k) << "\n";
}