#include <iostream>
#include <string>
using namespace std;

int main() {
    int dx[] = {0, -1, 1, 0}, dy[] = {-1, 0, 0, 1};
    int n, i, nx, ny, x = 1, y = 1, idx;
    string str;

    cin >> n;
    cin.ignore();
    getline(cin, str);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; ++i) {
        if (str[i] == ' ') continue;
        idx = str[i] % 5;
        nx = x + dx[idx], ny = y + dy[idx];
        if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
        x = nx; y = ny;
    }

    cout << x << " " << y;
}