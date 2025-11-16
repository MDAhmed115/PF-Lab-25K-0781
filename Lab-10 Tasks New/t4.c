#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[500], word[100], keywords[50][50];
    int kw_count = 0;

    printf("Enter chat lines (type 'END' to finish):\n");

    while (1) {
        fgets(line, 500, stdin);
        line[strlen(line) - 1] = '\0';
        if (strcmp(line, "END") == 0) break;

        int i = 0, w_index = 0;
        while (line[i] != '\0') {
            if (line[i] == '#' || line[i] == '@') {
                int j = 0;
                while (line[i] != ' ' && line[i] != '\0') {
                    word[j++] = line[i++];
                }
                word[j] = '\0';

                int duplicate = 0;
                for (int k = 0; k < kw_count; k++) {
                    if (strcmp(keywords[k], word) == 0) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    strcpy(keywords[kw_count], word);
                    kw_count++;
                }
            } else {
                i++;
            }
        }
    }

    printf("\nUnique hashtags and mentions found:\n");
    for (int i = 0; i < kw_count; i++) {
        printf("%s\n", keywords[i]);
    }
    printf("\nTotal distinct keywords: %d\n", kw_count);

    printf("\nPress any key to continue...");
    getchar();
    return 0;
}
