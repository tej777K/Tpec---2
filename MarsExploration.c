#include <stdio.h>
#include <string.h>

int marsExploration(char* s) {
    int len = strlen(s);
    int count = 0;
    
    // Iterate through each character in the string
    for (int i = 0; i < len; i++) {
        // Determine the expected character based on the position in the repeating "SOS" pattern
        if ((i % 3 == 0 || i % 3 == 2) && s[i] != 'S') {
            count++;
        } else if (i % 3 == 1 && s[i] != 'O') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char s[100];  // Assuming the length of the string is less than 100 characters
    scanf("%s", s);
    
    int result = marsExploration(s);
    printf("%d\n", result);
    
    return 0;
}
