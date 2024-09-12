#include <stdio.h>
#include <string.h>

// Function to perform pattern matching
void pattern_match(char *sequence, char *pattern) {
    int seq_len = strlen(sequence);
    int pat_len = strlen(pattern);

    // Iterate over each position in the sequence
    for (int i = 0; i <= seq_len - pat_len; i++) {
        int j;
        // Check for the pattern at the current position
        for (j = 0; j < pat_len; j++) {
            if (sequence[i + j] != pattern[j]) {
                break;
            }
        }
        // If the pattern was found, print the position
        if (j == pat_len) {
            printf("Pattern found at position %d\n", i);
        }
    }
}

int main() {
    char sequence[1000], pattern[100];

    // Input DNA sequence
    printf("Enter the DNA sequence: ");
    scanf("%s", sequence);

    // Input pattern to search
    printf("Enter the pattern to search for: ");
    scanf("%s", pattern);

    // Perform pattern matching
    pattern_match(sequence, pattern);

    return 0;
}
