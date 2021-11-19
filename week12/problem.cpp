#include <bits/stdc++.h>
using namespace std;

bool compare(const string& a, const string& b) {
    int i = 0;
    for (; a[i] != '\0' && b[i] != '\0'; ++i) {
        if (a[i] != b[i]) return a[i] > b[i];
    }
    if (a[i] == '\0') return b[i-1] > b[i];
    if (b[i] == '\0') return a[i-1] > a[i];
    return true;
}

int main() {
    vector<string> input = {"10", "68", "75", "7", "21", "12"};
    sort(input.begin(), input.end(), compare);
    for (auto s : input) cout << s << " ";
}