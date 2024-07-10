#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

int isFunnyString(char* s) {
    int len = strlen(s);

    for (int i = 1; i < len; i++) {
        int originalDiff = abs(s[i] - s[i - 1]);
        int reverseDiff = abs(s[len - i] - s[len - i - 1]);
        
        if (originalDiff != reverseDiff) {
            return 0; // Not funny
        }
    }
    return 1; // Funny
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        char s[10000];
        scanf("%s", s);

        if (isFunnyString(s)) {
            printf("Funny\n");
        } else {
            printf("Not Funny\n");
        }
    }
    return 0;
}
