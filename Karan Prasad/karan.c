#include <stdio.h>
#include <string.h>

void searchPattern(char *pattern, char *text) {
    int patternLen = strlen(pattern);
    int textLen = strlen(text);

    // Iterate through text
    for (int i = 0; i <= textLen - patternLen; i++) {
        int j;

        // Check for pattern match
        for (j = 0; j < patternLen; j++) {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == patternLen) { // Pattern found starting at index i
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[1000], pattern[100];
    
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove newline character from input
    
    printf("Enter pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = 0; // Remove newline character from input
    
    searchPattern(pattern, text);
    
    return 0;
}
