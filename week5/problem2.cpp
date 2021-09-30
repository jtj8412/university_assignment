#include <iostream>
using namespace std;

int main() {
    int n, answer, hour = (15 * 45) + (60 * 15);
    cin >> n;
    answer = (n + 1) * hour;
    if (answer >= 3) answer = (answer - hour) + 3600;
    cout << answer;
}