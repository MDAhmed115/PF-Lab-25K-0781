#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(){
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char msg[1000], words[50][50], newmsg[1000] = "";
    int i = 0, windex = 0, cindex = 0;
    printf("Enter a message: ");
    fgets(msg, 1000, stdin);
    msg[strlen(msg) - 1] = '\0';
    int oldlength = strlen(msg), newlength = 0;
    for (int i = 0; i < strlen(msg); i++){
        for (int j = 0; j < 10; j++){
            if (msg[i] == vowels[j]){
                msg[i] += 1;
            }
        }
    }
    for (int j = 0; j < strlen(msg); j++){
        if (msg[j] == ' ' || msg[j] == '\0'){
            words[windex][cindex] = '\0';
            cindex = 0;
            windex++;
        }
        else{
            words[windex][cindex] = msg[j];
            cindex++;
            newlength++;
        }
    }
    for (i = windex; i >= 0; i--){
        strcat(newmsg, words[i]);
        if (i > 0){
            strcat(newmsg, " ");
        }
    }
    printf("Encrypted message:\n");
    printf("%s", newmsg);
    printf("\n\nThe length of the original message: %d", oldlength);
    printf("\nThe length of the encrypted message: %d\n", strlen(newmsg));
    printf("\nPress any key to continue...");
    getchar();
    return 0;
}