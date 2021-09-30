#include <iostream>
using namespace std;

int main() {
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2}, 
        dy[] = {-1, -2, -2, -1, 1, 2, 2, 1}, 
        i, r, c, nr, nc, ans = 0;
    string s;
    cin >> s;
    r = s[1] - '0';
    c = s[0] - 'a' + 1;
    for (i = 0; i < 8; ++i) {
        nr = r + dx[i];
        nc = c + dy[i];
        if (nr >= 1 && nr <= 8 && nc >= 1 && nc <= 8) ans++;
    }
    cout << ans;
}