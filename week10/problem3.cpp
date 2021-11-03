//----------------------------------------------------------------------------------
// [ 가장 오른쪽 0 값의 비트를 1로 바꾼 값 찾기 ]
//----------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

string IntToBitString(int n, int len) {
    string ret;
    for (int i = 0, bit = 1; i < len; ++i, bit <<= 1) ret += (n & bit) ? "1" : "0";
    return ret;
}

int SetRightmostUnsetBit(int n) {
    return ((n + 1) & ~n) | n;
}

int main() {
    int n, answer;
    scanf("%d", &n);
    answer = SetRightmostUnsetBit(n);
    printf("%d\n", answer);
    cout << IntToBitString(n, 8) << " -> " << IntToBitString(answer, 8) << "\n";
}