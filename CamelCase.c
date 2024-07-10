#include <stdio.h>
#include <string.h>
#include <ctype.h>

int camelcase(char* s) {
    int count = 1; // There's always at least one word
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        if (isupper(s[i])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char s[100000];
    scanf("%s", s);
    
    int result = camelcase(s);
    printf("%d\n", result);
    
    return 0;
}
