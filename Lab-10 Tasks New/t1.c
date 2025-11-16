#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(){
    int found = 1, index, extra = 0;
    char users[100][20] = {"abcdef", "ahmash", "yahabs"};
    char first[20], last[20], newname[20], suffix[5];
    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);
    strncpy(newname, first, 3);
    strncpy(newname + 3, last, 3);
    newname[6] = '\0';
    for (int i = 0; i < strlen(newname); i++){
        newname[i] = tolower(newname[i]);
    }
    while (found){
        found = 0;
        for (int i = 0; i < 100; i++){
            if (strcmp(users[i], newname) == 0){
                printf("User already registered\n");
                found = 1;
                index = i;
                break;
            }
        }
        if (found){
            if (users[index][6] == '\0'){
                extra += 1;
                sprintf(suffix, "%d", extra);
                strcat(newname, suffix);
            }
            else{
                extra = atoi(&users[index][6]);
                extra += 1;
                sprintf(suffix, "%d", extra);
                strcat(newname, suffix);
            }
        }
    }
    if (!found){
        for (int i = 0; i < 100; i++){
            if (strlen(users[i]) == 0){
                strcpy(users[i], newname);
                printf("User %s registered\n", newname);
                break;
            }
        }
    }
    for (int i = 0; i < 100; i++){
        if (strlen(users[i]) != 0){
            printf("%s\n", users[i]);
        }
    }
    return 0;
}