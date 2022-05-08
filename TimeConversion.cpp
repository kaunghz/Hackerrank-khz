#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
void solve();
int main() {
    solve();
    return 0;
}

using namespace std;
// problem solution
void solve() {
    string s;
    getline (cin, s);
    // 07:05:45PM
    short int hour=stoi(s.substr(0,2));
    if (s[8]=='A' && hour==12)
        s="00"+s.substr(2);
    else if (s[8]=='P' && hour<12) {
        hour+=12;
        s=to_string(hour)+s.substr(2);
    }
    cout << s.substr(0,8);
}
