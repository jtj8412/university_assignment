#include <bits/stdc++.h>
using namespace std;

bool compare(const char* s1, const char* s2, int len) {
    for (int i = 0; i < len; ++i) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

int main() {
    int answer = 0x7fffffff, len;
    char s[1001];
    scanf("%s", s);
    len = strlen(s);
    for (int i = 1; i <= len / 2; ++i) {
        int compare_idx = 0, cnt = 1, cnt_sum = 0;
        for (int j = i; j < len; j += i) {
            if (compare(&s[j], &s[compare_idx], i)) {
                cnt++;
            } else {
                cnt_sum += i;
                if (cnt > 1) cnt_sum += log10(cnt) + 1;
                compare_idx = j;
                cnt = 1;
            }
        }
        if (len % i == 0) cnt_sum += (cnt > 1) ? i + log10(cnt) + 1 : i;
        else cnt_sum += len % i;
        answer = min(answer, cnt_sum);
    }
    printf("%d\n", answer);
}