#include <stdio.h>
#include <string.h>

int beautifulBinaryString(char* b) {
    int changes = 0;
    int len = strlen(b);

    // Traverse the string and look for "010"
    for (int i = 0; i <= len - 3; i++) {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0') {
            // Replace the '0' at b[i+2] with '1'
            b[i + 2] = '1';
            changes++; // Increment changes count
        }
    }

    return changes;
}

int main() {
    int n;
    scanf("%d", &n); // Read the length of the binary string

    char b[100001]; // Assuming the length of the string is less than 100001 characters
    scanf("%s", b);

    int result = beautifulBinaryString(b);
    printf("%d\n", result);

    return 0;
}
