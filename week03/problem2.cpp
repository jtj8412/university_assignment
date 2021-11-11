#include <iostream>
int main() {
    char s[21];
    scanf("%s", s);
    int answer = s[0] - '0', i;
    for (i = 1; s[i] != '\0'; ++i) {
        answer = (s[i] <= '1' || answer <= 1) ? answer + s[i] - '0' : answer * (s[i] - '0');
    }
    printf("%d", answer);
}