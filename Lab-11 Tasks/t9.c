#include <stdio.h>

#define PRODUCTS 5

struct Product {
    char name[50];
    int price;
    int id;
};

int main() {
    struct Product p[PRODUCTS];
    int i;

    for (i = 0; i < PRODUCTS; i++) {
        scanf("%s %d %d", p[i].name, &p[i].price, &p[i].id);
    }

    for (i = 0; i < PRODUCTS; i++) {
        printf("%s %d %d\n", p[i].name, p[i].price, p[i].id);
    }

    return 0;
}
