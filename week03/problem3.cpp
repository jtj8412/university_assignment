#include <iostream>
int main() {
    int answer = 0, val, trig = 0;
    char ch;
    scanf("%d", &answer);
    while (scanf("%c%d\n", &ch, &val) != EOF) {
        if (trig || ch == '-') { answer -= val; trig = 1; } 
        else answer += val;
    }
    printf("%d", answer);
}