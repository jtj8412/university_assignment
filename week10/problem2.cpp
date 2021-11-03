//----------------------------------------------------------------------------------
// [ 비트 연산을 통해 문자의 대소문자 바꾸기 ]
//----------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

void ToggleCase(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) str[i] ^= 32;
}

int main() {
    char str[100];
    scanf("%s", str);
    for (int i = 0; i < 2; ++i) {
        ToggleCase(str);
        printf("%s\n", str);
    }
}