#include <stdio.h>

struct Menu {
    char itemName[50];
    int price;
};

struct Restaurant {
    char name[50];
    struct Menu special;
};

int main() {
    struct Restaurant r;

    scanf("%s", r.name);
    scanf("%s %d", r.special.itemName, &r.special.price);

    printf("%s\n", r.name);
    printf("%s %d\n", r.special.itemName, r.special.price);

    return 0;
}
