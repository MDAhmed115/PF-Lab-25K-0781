#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentences[5][200];
    char search[50];
    int total_matches = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter sentence %d: ", i + 1);
        fgets(sentences[i], 200, stdin);
        sentences[i][strlen(sentences[i]) - 1] = '\0';
    }

    printf("\nEnter word to search: ");
    fgets(search, 50, stdin);
    search[strlen(search) - 1] = '\0';

    printf("\nSentences containing '%s':\n", search);
    for (int i = 0; i < 5; i++) {
        if (strstr(sentences[i], search) != NULL) {
            printf("%s\n", sentences[i]);
            total_matches++;
        }
    }

    printf("\nTotal occurrences found: %d\n", total_matches);

    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
