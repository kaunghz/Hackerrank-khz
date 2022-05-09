#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
void solve();
int main() {
    solve();
    return 0;
}

// problem solution
void solve() {
    int n, k;
    string s;
    cin >> n >> s >> k;
    k%=26;
    for (int i=0; i<n; ++i)
        if (isalpha(s[i]))
            ((toupper(s[i])+k)>'Z') ? s[i]-=(26-k) : s[i]+=k;
    cout << s << "\n";
}
