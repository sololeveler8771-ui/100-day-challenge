//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int i = 0, n = strlen(s);
    while (i < n) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        int start = i;
        while (i < n && s[i] != ' ')
            i++;
        int end = i - 1;
        while (start < end) {
            char t = s[start];
            s[start] = s[end];
            s[end] = t;
            start++;
            end--;
        }
    }

    printf("%s\n", s);
    return 0;
}
