#include <stdio.h>

void inputRatings(int ratings[5]) {
    printf("Enter ratings for 5 movies (1 to 10):\n");
    for (int i = 0; i < 5; i++) {
        printf("Movie %d: ", i + 1);
        scanf("%d", &ratings[i]);
    }
}

float calculateAverage(int ratings[5]) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += ratings[i];
    }
    return total / 5.0;
}

void classifyMovie(int rating) {
    if (rating >= 9) printf("Excellent");
    else if (rating >= 7) printf("Good");
    else if (rating >= 5) printf("Average");
    else printf("Poor");
}

void displaySummary(int ratings[5]) {
    float avg = calculateAverage(ratings);
    printf("\n=== Movie Rating Summary ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Movie %d: Rating = %d -> ", i + 1, ratings[i]);
        classifyMovie(ratings[i]);
        printf("\n");
    }
    printf("\nAverage Rating of All Movies: %.2f\n", avg);
}

int main() {
    int ratings[5];
    inputRatings(ratings);
    displaySummary(ratings);
    return 0;
}
