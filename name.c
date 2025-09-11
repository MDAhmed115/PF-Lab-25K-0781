#include <stdio.h>
int main(){
    char name[100];
    int age;
    age = 0;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("What's your age: ");
    scanf(" %d", &age);
    printf("Hello %s, you are %d years old", name, age);
    return 0;
}
