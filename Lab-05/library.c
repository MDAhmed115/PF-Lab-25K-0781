#include <stdio.h>

int main() {
    char loggedIn;
    char membership;
    char phd;

    printf("Is the user logged in? (y/n): ");
    scanf(" %c", &loggedIn);

    if (loggedIn == 'y' || loggedIn == 'Y') {
        printf("Enter membership type (f=free, s=standard, p=premium): ");
        scanf(" %c", &membership);

        if (membership == 'f' || membership == 'F') {
            printf("Access: Open E-Books only.\n");
        }
        else if (membership == 's' || membership == 'S') {
            printf("Access: E-Books and Journals.\n");
        }
        else if (membership == 'p' || membership == 'P') {
            printf("Are you a PhD student? (y/n): ");
            scanf(" %c", &phd);

            if (phd == 'y' || phd == 'Y') {
                printf("Access: E-Books, Journals, Research Papers, Datasets, and Archived Historical Collections.\n");
            } else {
                printf("Access: E-Books, Journals, Research Papers, and Datasets.\n");
            }
        }
        else {
            printf("Invalid membership type.\n");
        }
    }
    else {
        printf("Access Denied. Please log in first.\n");
    }

    return 0;
}
