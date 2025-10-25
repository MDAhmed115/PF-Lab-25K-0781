#include <stdio.h>
int main(){
    int width, height;
    char color;
    printf("Enter width and height of the image:\n");
    scanf("%d %d", &width, &height);
    int image[height][width][3];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("Enter the decimal value (0-255) for each color of the pixel %d x %d:\n", i+1, j+1);
            for (int k = 0; k < 3; k++)
            {
                color = (k == 0 ? 'r': (k == 1 ? 'g': 'b'));
                printf("%c: ", color);
                scanf("%d", &image[i][j][k]); 
            }
        }    
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("|%d|", image[i][j][k]);
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}