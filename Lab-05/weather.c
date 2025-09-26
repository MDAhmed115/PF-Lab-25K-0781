#include <stdio.h>

int main() {
    float temperature;
    char snowfall, humidity;

    printf("Enter temperature (C): ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Is snowfall detected? (y/n): ");
        scanf(" %c", &snowfall);

        if (snowfall == 'y' || snowfall == 'Y') {
            printf("Snowstorm Alert!\n");
        } else {
            printf("Frost Warning!\n");
        }
    }
    else if (temperature > 35) {
        printf("Is humidity high? (y/n): ");
        scanf(" %c", &humidity);

        if (humidity == 'y' || humidity == 'Y') {
            printf("Heatwave with High Humidity Alert!\n");
        } else {
            printf("Dry Heatwave Alert!\n");
        }
    }
    else {
        printf("Normal Weather.\n");
    }

    return 0;
}
