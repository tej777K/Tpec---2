#include <stdio.h>
#include <string.h>

int alternatingCharacters(char* s) {
    int deletions = 0;
    int len = strlen(s);

    for (int i = 1; i < len; i++) {
        if (s[i] == s[i - 1]) {
            deletions++;
        }
    }

    return deletions;
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        char s[100000]; // Assuming the length of the string is less than 100000 characters
        scanf("%s", s);

        int result = alternatingCharacters(s);
        printf("%d\n", result);
    }

    return 0;
}
